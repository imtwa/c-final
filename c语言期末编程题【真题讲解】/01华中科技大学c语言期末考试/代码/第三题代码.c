#include <stdio.h>
/*
����
1234
*/
int main()
{ 
//	int n,z=0;
//	scanf("%d",&n);
//	while(n!=0){
//		n/=10;
//		z++;
//	}
//	printf("%d",z);
	char s[17];
	scanf("%s",s);
	char *k = s;
	while(*k!='\0')k++;
	printf("%d",k-s); 

 	return 0;
}

