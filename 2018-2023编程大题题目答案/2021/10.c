#include <stdio.h>  
#include <stdlib.h>  
/*
���ַ�����ת����ʮ���������硰123456��ת��Ϊ����123456
*/
int main() {  
    char str[100]; // �����ַ����飬���ڴ洢������ַ���  
    printf("������һ�����ִ���");  
    scanf("%s", str); // ��ȡ������ַ���  
    int num = atoi(str); // ���ַ���ת��������  
    printf("ת���������Ϊ��%d\n", num);  
    return 0;  
}
