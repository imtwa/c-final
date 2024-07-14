#include <stdio.h>

int isAlternating(int n) {
	int i;
	int prev = n % 2; // ��һ���Ƿ�Ϊż��
	for (i = 1; i < n; i++) {
		if ((prev == 0 && i % 2 == 1) || // �����һ����ż���ҵ�ǰ����������������Ҫ��
		        (prev == 1 && i % 2 == 0)) { // �����һ���������ҵ�ǰ����ż����������Ҫ��
			return 0;
		}
		prev = i % 2; // ������һ���Ƿ�Ϊż��
	}
	return 1;
}

/*
��ż������������һ��������ʹ�����ڵ�������ż����ģ�����12345�ǡ�ż������2234������ż������
*/

int main() {
	int n,i;
	printf("�������������еĳ���: ");
	scanf("%d", &n);
	int arr[n];
	printf("��������������: ");
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	if (isAlternating(n)) {
		printf("����ż������\n");
	} else {
		printf("������ż������\n");
	}
	return 0;
}
