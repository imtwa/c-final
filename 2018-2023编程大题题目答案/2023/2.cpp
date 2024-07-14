#include <stdio.h>  

/*
拉丁方阵 （Latin square）是一种 n × n 的 方阵 ，
在这种 n × n 的方阵里，恰有 n 种不同的元素 ，
每一种不同的元素在同一行或同一列里只出现一次。
输入一个整数N，输出所有的拉丁方阵（排头数字小的拉丁方阵优先输出）。
*/
int main()  
{  
    int n, i, j, k;  
    printf("请输入n的值：");  
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
