#include <stdio.h>
int n,z;
int a[200]= {1};
void devide(int m,int t) {
	for(int i=a[t-1]; i<=m; i++) {
		if(i<n) {
			a[t]=i;
			m-=i;
			if(m==0)
				z++; 
			else
				devide(m,t+1);
		}
		m+=i;
	}
}
/*
����һ����n�������� nnl+n2+....����ʽ��n1��n2>=1
��6=6/ 5+1/ 4+2/ 4+1+1/3+3/3+2+1/ 3+1+1+1/ 2+2+2/ 2+2+1+1/2+1+1+1+1/1+1+1+1+1+1
��ʮһ����ʽ������һ��������n������ɲ�ֵ���ʽ�ж�����
*/
int main() {
	scanf("%d",&n);
	devide(n,1);
	printf("%d",z+1); 
	return 0;
}

