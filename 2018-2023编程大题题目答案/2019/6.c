#include <stdio.h>  
/*
��Ƴ���ʵ�����¹���:�ڼ���������һ��ʮ������������������ת��Ϊ���Ӧ�Ķ���������������Ļ�����
*/
void decimalToBinary(int n) {  
    // ���ڴ洢��������������  
    int binaryNum[32];  
    int i = 0, j;  
  
    // ��ʮ����������0ʱ������ת��  
    while (n > 0) {  
        // �������洢��������  
        binaryNum[i] = n % 2;  
        n = n / 2; // ����nֵΪ��  
        i++;  
    }  
  
    // �������ĩβ��ʼ��ӡ��������  
    for (j = i - 1; j >= 0; j--) {  
        printf("%d", binaryNum[j]);  
    }  
}  
  
int main() {  
    int decimal;  
  
    // �Ӽ��������ȡʮ������  
    scanf("%d", &decimal);  
    decimalToBinary(decimal);  
    printf("\n");  
  
    return 0;  
}
