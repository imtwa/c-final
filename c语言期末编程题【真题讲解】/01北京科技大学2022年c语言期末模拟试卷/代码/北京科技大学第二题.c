#include <stdio.h>

/*
����
O*O2*0**22*
*OO*01**17*
*O*O*PA**SS
**OO*E*XAM*
*/

int main() {
	int n=4;
	while(n--) {
		char s[27];
		scanf("%s",s);
		int i;
		for(i=0; s[i]!='\0'; i++) {
			if(s[i]=='*') {
				printf("%c",s[i]);
			}
		}
		for(i=0; s[i]!='\0'; i++) {
			if(s[i]!='*') {
				printf("%c",s[i]);
			}
		}
		printf("\n");
	}


	return 0;
}

