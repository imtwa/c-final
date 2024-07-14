#include <stdio.h>

int s[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char m[17] = "10X98765432";
//320124198808240056 ÕıÈ·
//37070419881216001X ´íÎó 
void check(char a[]) {
	int z = 0;
	int i = 0;
	for(i=0; i<17; i++) {
		int k = a[i]-'0';
		z+=s[i]*k;
	}
	if(m[z%11]==a[17]) {
		printf("correct!\n");
	} else {
		printf("error!\n");
	}

}
int main() {

	char p[20];
	scanf("%s",p);
	check(p);

	return 0;
}

