#include <stdio.h>  
/*
编写程序实现对给定的某年某月某日，
计算并输出它是这一年的第几天。给定的日期从键盘输入。
*/
int main() {  
    int year, month, day, days;  
  
    // 读入年月日  
    scanf("%d", &year);  
    scanf("%d", &month);  
    scanf("%d", &day);  
  
    // 判断是否为闰年  
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {  
        days = 29;  
    } else {  
        days = 28;  
    }  
  
    // 根据月份计算天数  
    switch (month) {  
        case 2:  
            days = days + day;  
            break;  
        case 4:  
        case 6:  
        case 9:  
        case 11:  
            days = days + day;  
            break;  
        case 1:  
        case 3:  
        case 5:  
        case 7:  
        case 8:  
        case 10:  
        case 12:  
            days = days + day;  
            break;  
        default:  
            printf("错误的输入！\n");  
            return -1;  
    }  
  
    // 输出结果  
    printf("%d年%d月%d日是该年的第%d天\n", year, month, day, days);  
  
    return 0;  
}
