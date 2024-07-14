#include <stdio.h>  
#include <stdlib.h>  
/*
将字符串串转化成十进制数，如“123456”转化为数字123456
*/
int main() {  
    char str[100]; // 定义字符数组，用于存储输入的字符串  
    printf("请输入一个数字串：");  
    scanf("%s", str); // 读取输入的字符串  
    int num = atoi(str); // 将字符串转换成整数  
    printf("转换后的数字为：%d\n", num);  
    return 0;  
}
