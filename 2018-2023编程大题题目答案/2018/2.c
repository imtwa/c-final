#include <stdio.h>  
/*
��д����ʵ�ֶԸ�����ĳ��ĳ��ĳ�գ�
���㲢���������һ��ĵڼ��졣���������ڴӼ������롣
*/
int main() {  
    int year, month, day, days;  
  
    // ����������  
    scanf("%d", &year);  
    scanf("%d", &month);  
    scanf("%d", &day);  
  
    // �ж��Ƿ�Ϊ����  
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {  
        days = 29;  
    } else {  
        days = 28;  
    }  
  
    // �����·ݼ�������  
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
            printf("��������룡\n");  
            return -1;  
    }  
  
    // ������  
    printf("%d��%d��%d���Ǹ���ĵ�%d��\n", year, month, day, days);  
  
    return 0;  
}
