#include <stdio.h>
#include <math.h>
/*
��д�����������ʽ��:cos(x)1-x2!+x4!-6!+...
Ҫ�����һ��ľ���ֵС��1e5Ϊֹ��
*/
int main() {
	double x, cos_x, factorial, term = 1.0;
	int i, j, sign = 1;

	// ����x��ֵ
	scanf("%lf", &x);
	// ����cos(x)��ֵ
	cos_x = cos(x);
	// �����һ��
	term = cos_x;
	// ѭ������ÿһ��
	for (i = 2; fabs(term) >= 1e5; i += 2) {
		factorial = 1.0;
		// ����׳�
		for (j = 1; j <= i; j++) {
			factorial *= j;
		}
		// �������
		sign = ((i % 4) == 0) ? 1 : -1;
		// ���㵱ǰ��
		term = sign * pow(x, i) / factorial;
		// �ۼӵ������
		term += term * term * term * term * cos_x;
	}

	// ������
	printf("���Ϊ��%lf\n", term);

	return 0;
}
