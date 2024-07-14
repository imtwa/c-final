#include <stdio.h>
#include <string.h>

/*
样例
12345678
*/

int main() {

//	int n;
//	// int类型可以储存九位数
//	scanf("%d",&n);
//	while(n!=0){
//		printf("%d",n%10);
//		n/=10;
//	}

//	char s[10];
//	// 数组类型不需要& 字符数组使用%s
//	scanf("%s",s);
//	int i=0;
//	for(i=strlen(s)-1;i>=0;i--){
//		printf("%c",s[i]);
//	}
//
//	char s[10];
//	scanf("%s",s);
//	char *p = s+strlen(s);
//	while(p!=s){
//		//地址-1
//		p--;
//		//*p是该地址上的值
//		printf("%c",*p);
//	}
//
	char s[10];
	scanf("%s",s);
	// 字符串反转函数
	strrev(s);
	printf("%s",s);

	return 0;
}

