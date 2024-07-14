#include <stdio.h>

int isAlternating(int n) {
	int i;
	int prev = n % 2; // 上一数是否为偶数
	for (i = 1; i < n; i++) {
		if ((prev == 0 && i % 2 == 1) || // 如果上一数是偶数且当前数是奇数，不符合要求
		        (prev == 1 && i % 2 == 0)) { // 如果上一数是奇数且当前数是偶数，不符合要求
			return 0;
		}
		prev = i % 2; // 更新上一数是否为偶数
	}
	return 1;
}

/*
奇偶交替数，输入一串整数，使得相邻的两个数偶交替的，例如12345是“偶交替数2234不是奇偶交替数
*/

int main() {
	int n,i;
	printf("请输入整数序列的长度: ");
	scanf("%d", &n);
	int arr[n];
	printf("请输入整数序列: ");
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	if (isAlternating(n)) {
		printf("是奇偶交替数\n");
	} else {
		printf("不是奇偶交替数\n");
	}
	return 0;
}
