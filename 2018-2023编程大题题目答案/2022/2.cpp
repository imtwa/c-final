#include <stdio.h>  
#include <string.h>  
  
int isAnagram(char *str1, char *str2) {  
    int count[10] = {0};  
    int i, len1, len2;  
  
    len1 = strlen(str1);  
    len2 = strlen(str2);  
  
    // ��������ַ������Ȳ�ͬ�������ǲ���ͬ��������  
    if (len1 != len2) {  
        return 0;  
    }  
  
    // ͳ���ַ�����ÿ���ַ����ֵĴ���  
    for (i = 0; i < len1; i++) {  
        count[str1[i] - '0']++;  
        count[str2[i] - '0']--;  
    }  
  
    // ���ͳ����������һ�����ϵ�Ԫ�ز�Ϊ0�������ǲ���ͬ��������  
    for (i = 0; i < 10; i++) {  
        if (count[i] != 0) {  
            return 0;  
        }  
    }  
  
    return 1;  
}  
/*
����ͬ������(�������ָ���)����ͬ�������γɵ���������Ϊ��ͬ�������塱����
 66167�� 16667 ���� 3��6,1�� 1;1��7��ɣ���Ϊ��ͬ�������塱
��6617 �� 66671 ����
����Ƴ���ʵ��ͬ����������ж���
*/
int main() {  
    char str1[100], str2[100];  
  
    printf("�������һ���ַ�����");  
    scanf("%s", str1);  
    printf("������ڶ����ַ�����");  
    scanf("%s", str2);  
  
    if (isAnagram(str1, str2)) {  
        printf("�������ַ�����ͬ�������塣\n");  
    } else {  
        printf("�������ַ�������ͬ�������塣\n");  
    }  
  
    return 0;  
}
