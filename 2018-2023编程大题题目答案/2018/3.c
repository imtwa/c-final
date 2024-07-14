#include <stdio.h>
#include <math.h>
/*
编写程序计算如下式子:cos(x)1-x2!+x4!-6!+...
要求最后一项的绝对值小于1e5为止。
*/
int main() {
	double x, cos_x, factorial, term = 1.0;
	int i, j, sign = 1;

	// 输入x的值
	scanf("%lf", &x);
	// 计算cos(x)的值
	cos_x = cos(x);
	// 计算第一项
	term = cos_x;
	// 循环计算每一项
	for (i = 2; fabs(term) >= 1e5; i += 2) {
		factorial = 1.0;
		// 计算阶乘
		for (j = 1; j <= i; j++) {
			factorial *= j;
		}
		// 计算符号
		sign = ((i % 4) == 0) ? 1 : -1;
		// 计算当前项
		term = sign * pow(x, i) / factorial;
		// 累加到结果中
		term += term * term * term * term * cos_x;
	}

	// 输出结果
	printf("结果为：%lf\n", term);

	return 0;
}
