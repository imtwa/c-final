#include <stdio.h>  
  
void sort(int arr[], int n) {  
    int i, j, temp;  
  
    // 冒泡排序  
    for (i = 0; i < n-1; i++) {  
        for (j = 0; j < n-i-1; j++) {  
            if (arr[j] > arr[j+1]) {  
                temp = arr[j];  
                arr[j] = arr[j+1];  
                arr[j+1] = temp;  
            }  
        }  
    }  
}  
/*
设计程序实现以下功能:对任意输入的一组无序数据，将其调整为一个非递减数列
*/
int main() {  
    int arr[100], n, i;  
  
    printf("请输入数组元素个数：");  
    scanf("%d", &n);  
  
    printf("请输入数组元素：");  
    for (i = 0; i < n; i++) {  
        scanf("%d", &arr[i]);  
    }  
  
    sort(arr, n);  
  
    printf("排序后的非递减数列为：");  
    for (i = 0; i < n; i++) {  
        printf("%d ", arr[i]);  
    }  
    printf("\n");  
  
    return 0;  
}
