#include <stdio.h>  
#include <stdlib.h>  
  
#define N 3  // ��������ά��Ϊ3  
/*
��֪��3��NXN �ľ���A��B��C�����ʵ����3����������(AxBxC)�������˽������Ļ�����
*/
int main() {  
    int A[N][N], B[N][N], C[N][N], D[N][N];  // �����ĸ�NXN�ľ���  
    int i, j, k;  
  
    // ��ʼ������A��B��C  
    for (i = 0; i < N; i++) {  
        for (j = 0; j < N; j++) {  
            A[i][j] = i + j;  
            B[i][j] = i * j;  
            C[i][j] = i + j + 1;  
        }  
    }  
  
    // ����������˽��  
    for (i = 0; i < N; i++) {  
        for (j = 0; j < N; j++) {  
            D[i][j] = 0;  
            for (k = 0; k < N; k++) {  
                D[i][j] += A[i][k] * B[k][j];  
            }  
        }  
    }  
  
    // ������˽��  
    printf("�������˽��Ϊ��\n");  
    for (i = 0; i < N; i++) {  
        for (j = 0; j < N; j++) {  
            printf("%d ", D[i][j]);  
        }  
        printf("\n");  
    }  
  
    return 0;  
}
