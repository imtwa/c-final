#include <stdio.h>

int main() {
	double w,h,s;
	scanf("%lf %lf",&w,&h);
	s = w/(h*h);
	printf("%lf\n",s);
	if(s<18) {
		printf("Æ«ÊÝ\n");
	} else if(s<25) {
		printf("±ê×¼\n");
	} else if(s<27) {
		printf("Æ«ÅÖ\n");
	} else {
		printf("·ÊÅÖ\n");
	}

	return 0;
}

