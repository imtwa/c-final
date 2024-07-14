#include <stdio.h>  
#include <stdlib.h>  
  
#define N 3  // 定义矩阵的维数为3  
/*
已知有3个NXN 的矩阵A、B、C，编程实现这3个矩阵连乘(AxBxC)，将连乘结果在屏幕上输出
*/
int main() {  
    int A[N][N], B[N][N], C[N][N], D[N][N];  // 定义四个NXN的矩阵  
    int i, j, k;  
  
    // 初始化矩阵A、B、C  
    for (i = 0; i < N; i++) {  
        for (j = 0; j < N; j++) {  
            A[i][j] = i + j;  
            B[i][j] = i * j;  
            C[i][j] = i + j + 1;  
        }  
    }  
  
    // 计算矩阵连乘结果  
    for (i = 0; i < N; i++) {  
        for (j = 0; j < N; j++) {  
            D[i][j] = 0;  
            for (k = 0; k < N; k++) {  
                D[i][j] += A[i][k] * B[k][j];  
            }  
        }  
    }  
  
    // 输出连乘结果  
    printf("矩阵连乘结果为：\n");  
    for (i = 0; i < N; i++) {  
        for (j = 0; j < N; j++) {  
            printf("%d ", D[i][j]);  
        }  
        printf("\n");  
    }  
  
    return 0;  
}
