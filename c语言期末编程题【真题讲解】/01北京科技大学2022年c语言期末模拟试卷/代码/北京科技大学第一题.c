#include <stdio.h>
#include <string.h>

/*
����
12345678
*/

int main() {

//	int n;
//	// int���Ϳ��Դ����λ��
//	scanf("%d",&n);
//	while(n!=0){
//		printf("%d",n%10);
//		n/=10;
//	}

//	char s[10];
//	// �������Ͳ���Ҫ& �ַ�����ʹ��%s
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
//		//��ַ-1
//		p--;
//		//*p�Ǹõ�ַ�ϵ�ֵ
//		printf("%c",*p);
//	}
//
	char s[10];
	scanf("%s",s);
	// �ַ�����ת����
	strrev(s);
	printf("%s",s);

	return 0;
}

