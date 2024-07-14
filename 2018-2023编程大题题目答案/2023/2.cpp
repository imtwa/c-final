#include <stdio.h>  

/*
�������� ��Latin square����һ�� n �� n �� ���� ��
������ n �� n �ķ����ǡ�� n �ֲ�ͬ��Ԫ�� ��
ÿһ�ֲ�ͬ��Ԫ����ͬһ�л�ͬһ����ֻ����һ�Ρ�
����һ������N��������е�����������ͷ����С���������������������
*/
int main()  
{  
    int n, i, j, k;  
    printf("������n��ֵ��");  
    scanf("%d", &n);  
   
    int a[n][n];  
    for(i = 0; i < n; i++) {  
        a[0][i] = i + 1;  
    }  
   
    for(i = 1; i < n; i++) {  
        for(j = 0; j < n; j++) {  
            a[i][j] = a[i - 1][(j + 1) % n];  
        }  
    }  
   
    for(k = 0; k < n; k++) {  
        for(i = k; i < n + k; i++) {  
            for(j = 0; j < n; j++) {  
                printf("%d ", a[i % n][j]);  
            }  
            printf("\n");  
        }  
        printf("\n");  
    }  
   
    return 0;  
}
