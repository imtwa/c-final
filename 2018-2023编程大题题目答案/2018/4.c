#include <stdio.h>  
  
//����4x4����Ĵ�С  
#define SIZE 4  
/*
��д����ʵ�ֽ�һ��4x4���������˳ʱ����ת90�Ⱥ������
Ҫ��ԭʼ��������ݴӼ���������룬��������4��4�еķ�ʽ���
*/
int main() {  
    int original[SIZE][SIZE], rotated[SIZE][SIZE];  //����ԭʼ�����������  
    int i, j;  
  
    //�Ӽ�������ԭʼ���������  
    printf("������%d��%d�е��������ݣ�\n", SIZE, SIZE);  
    for (i = 0; i < SIZE; i++) {  
        for (j = 0; j < SIZE; j++) {  
            scanf("%d", &original[i][j]);  
        }  
    }  

  
    //˳ʱ����ת90��  
    for (i = 0; i < SIZE; i++) {  
        for (j = 0; j < SIZE; j++) {  
            rotated[j][SIZE - i - 1] = original[i][j];  
        }  
    }  
  
    //���������  
    printf("��ת�������Ϊ��\n");  
    for (i = 0; i < SIZE; i++) {  
        for (j = 0; j < SIZE; j++) {  
            printf("%d ", rotated[i][j]);  
        }  
        printf("\n");  
    }  
  
    return 0;  
}
