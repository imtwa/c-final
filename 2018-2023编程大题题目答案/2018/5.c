#include <stdio.h>
/*
编写程序实现在一个按照升序排序的数组中查找X应插入的位置，并将插入数组中，
使得数组元素仍按照升序排列，输出插入后的数组。
原数组和x值由键盘输入，插入操作用函数实现。
*/
// 在已排序的数组 arr 中插入一个元素 x，并返回插入后的数组
void insert(int arr[], int n, int x) {
	int i, j, k;
	// 使用二分查找法查找插入位置
	for (i = 0, j = n - 1; i <= j; ) {
		int mid = (i + j) / 2;
		if (arr[mid] == x) {
			// 如果 x 已经在数组中，直接返回原数组
			break;
		} else if (arr[mid] > x) {
			j = mid - 1;
		} else {
			i = mid + 1;
		}
	}
	// 将 x 插入到正确的位置
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
	// 调用 insert 函数插入元素并输出插入后的数组
	printf("插入后的数组为：");
	insert(arr, n, x);
	for (i = 0; i < n + 1; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
