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
����������� A �ķǱ߽�Ԫ�� A[]�������ڵ��ϡ��¡����� 4 ��Ԫ�أ�
��Գ�Ԫ��A[iJD]�Ǿ��� A �ľֲ����ֵ��
��Ƴ���ʵ�ֶ���һ����� m �� n ����������
����þ������оֲ�����ֵ�������ڵ�λ�á�
*/
int main() {  
    int m, n, i, j;  
    printf("����������������������");  
    scanf("%d %d", &m, &n);  
    printf("���������������Ԫ�أ��Կո������");  
    for (i = 0; i < m; i++) {  
        for (j = 0; j < n; j++) {  
            scanf("%d", &matrix[i][j]);  
        }  
    }  
    pre_process(m, n);  
    find_local_max(m, n);  
    return 0;  
}
