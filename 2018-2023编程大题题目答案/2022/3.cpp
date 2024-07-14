#include <stdio.h>  
#include <stdlib.h>  
  
#define MAX_M 100  
#define MAX_N 100  
  
int matrix[MAX_M][MAX_N];  
int result[MAX_M][MAX_N];  
int max_value = -1;  
  
void pre_process(int m, int n) {  
    int i, j;  
    for (i = 1; i < m; i++) {  
        for (j = 1; j < n; j++) {  
            if (matrix[i][j] < matrix[i-1][j-1] || matrix[i][j] < matrix[i-1][j] || matrix[i][j] < matrix[i-1][j+1] ||  
                matrix[i][j] < matrix[i][j-1] || matrix[i][j] < matrix[i][j+1] ||  
                matrix[i][j] < matrix[i+1][j-1] || matrix[i][j] < matrix[i+1][j] || matrix[i][j] < matrix[i+1][j+1]) {  
                result[i][j] = -1;  
            } else {  
                result[i][j] = matrix[i][j];  
            }  
        }  
    }  
}  
  
void find_local_max(int m, int n) {  
    int i, j, k, l;  
    for (i = 1; i < m; i++) {  
        for (j = 1; j < n; j++) {  
            if (result[i][j] > result[i-1][j-1] && result[i][j] > result[i-1][j] && result[i][j] > result[i-1][j+1] &&  
                result[i][j] > result[i][j-1] && result[i][j] > result[i][j+1] &&  
                result[i][j] > result[i+1][j-1] && result[i][j] > result[i+1][j] && result[i][j] > result[i+1][j+1]) {  
                printf("(%d, %d): %d\n", i, j, result[i][j]);  
                max_value = result[i][j];  
            }  
        }  
    }  
}  
/*
如果整数矩阵 A 的非边界元素 A[]大于相邻的上、下、左、右 4 个元素，
则对称元素A[iJD]是矩阵 A 的局部最大值，
设计程序实现对任一输入的 m 行 n 列整数矩阵，
输出该矩阵所有局部极大值及其所在的位置。
*/
int main() {  
    int m, n, i, j;  
    printf("请输入矩阵的行数和列数：");  
    scanf("%d %d", &m, &n);  
    printf("请输入整数矩阵的元素，以空格隔开：");  
    for (i = 0; i < m; i++) {  
        for (j = 0; j < n; j++) {  
            scanf("%d", &matrix[i][j]);  
        }  
    }  
    pre_process(m, n);  
    find_local_max(m, n);  
    return 0;  
}
