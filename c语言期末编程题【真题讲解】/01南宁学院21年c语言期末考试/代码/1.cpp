#include <stdio.h>

int main() {
	double w,h,s;
	scanf("%lf %lf",&w,&h);
	s = w/(h*h);
	printf("%lf\n",s);
	if(s<18) {
		printf("ƫ��\n");
	} else if(s<25) {
		printf("��׼\n");
	} else if(s<27) {
		printf("ƫ��\n");
	} else {
		printf("����\n");
	}

	return 0;
}

