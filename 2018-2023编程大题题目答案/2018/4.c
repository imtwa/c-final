#include <stdio.h>  
  
//定义4x4数组的大小  
#define SIZE 4  
/*
编写程序实现将一个4x4的数组进行顺时针旋转90度后输出。
要求，原始数组的数据从键盘随机输入，新数组以4行4列的方式输出
*/
int main() {  
    int original[SIZE][SIZE], rotated[SIZE][SIZE];  //定义原始数组和新数组  
    int i, j;  
  
    //从键盘输入原始数组的数据  
    printf("请输入%d行%d列的数组数据：\n", SIZE, SIZE);  
    for (i = 0; i < SIZE; i++) {  
        for (j = 0; j < SIZE; j++) {  
            scanf("%d", &original[i][j]);  
        }  
    }  

  
    //顺时针旋转90度  
    for (i = 0; i < SIZE; i++) {  
        for (j = 0; j < SIZE; j++) {  
            rotated[j][SIZE - i - 1] = original[i][j];  
        }  
    }  
  
    //输出新数组  
    printf("旋转后的数组为：\n");  
    for (i = 0; i < SIZE; i++) {  
        for (j = 0; j < SIZE; j++) {  
            printf("%d ", rotated[i][j]);  
        }  
        printf("\n");  
    }  
  
    return 0;  
}
