#include <stdio.h>  
  
void sort(int arr[], int n) {  
    int i, j, temp;  
  
    // ð������  
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
��Ƴ���ʵ�����¹���:�����������һ���������ݣ��������Ϊһ���ǵݼ�����
*/
int main() {  
    int arr[100], n, i;  
  
    printf("����������Ԫ�ظ�����");  
    scanf("%d", &n);  
  
    printf("����������Ԫ�أ�");  
    for (i = 0; i < n; i++) {  
        scanf("%d", &arr[i]);  
    }  
  
    sort(arr, n);  
  
    printf("�����ķǵݼ�����Ϊ��");  
    for (i = 0; i < n; i++) {  
        printf("%d ", arr[i]);  
    }  
    printf("\n");  
  
    return 0;  
}
