#include <stdio.h>  
/*
设计程序实现以下功能:在键盘上输入一个十进制正整数，将该数转换为其对应的二进制数，并在屏幕上输出
*/
void decimalToBinary(int n) {  
    // 用于存储二进制数的数组  
    int binaryNum[32];  
    int i = 0, j;  
  
    // 当十进制数大于0时，进行转换  
    while (n > 0) {  
        // 将余数存储到数组中  
        binaryNum[i] = n % 2;  
        n = n / 2; // 更新n值为商  
        i++;  
    }  
  
    // 从数组的末尾开始打印二进制数  
    for (j = i - 1; j >= 0; j--) {  
        printf("%d", binaryNum[j]);  
    }  
}  
  
int main() {  
    int decimal;  
  
    // 从键盘输入获取十进制数  
    scanf("%d", &decimal);  
    decimalToBinary(decimal);  
    printf("\n");  
  
    return 0;  
}
