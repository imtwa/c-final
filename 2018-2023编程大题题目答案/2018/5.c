#include <stdio.h>
/*
��д����ʵ����һ��������������������в���XӦ�����λ�ã��������������У�
ʹ������Ԫ���԰����������У�������������顣
ԭ�����xֵ�ɼ������룬��������ú���ʵ�֡�
*/
// ������������� arr �в���һ��Ԫ�� x�������ز���������
void insert(int arr[], int n, int x) {
	int i, j, k;
	// ʹ�ö��ֲ��ҷ����Ҳ���λ��
	for (i = 0, j = n - 1; i <= j; ) {
		int mid = (i + j) / 2;
		if (arr[mid] == x) {
			// ��� x �Ѿ��������У�ֱ�ӷ���ԭ����
			break;
		} else if (arr[mid] > x) {
			j = mid - 1;
		} else {
			i = mid + 1;
		}
	}
	// �� x ���뵽��ȷ��λ��
	for (k = n; k > j; k--) {
		arr[k] = arr[k - 1];
	}
	arr[j] = x;
}

int main() {
	int n, x, i;
	scanf("%d %d", &n, &x);
	int arr[n];
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	// ���� insert ��������Ԫ�ز��������������
	printf("����������Ϊ��");
	insert(arr, n, x);
	for (i = 0; i < n + 1; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
