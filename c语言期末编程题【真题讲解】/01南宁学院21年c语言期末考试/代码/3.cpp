#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int num;
    char name[20];
    int math;
    int english;
    int computer;
    int sum;
    float average;
    char flag;
} Student;

void saveToFile(Student students[], int size) {
    FILE *file = fopen("e:\\stuInfo.txt", "w");
    if (file == NULL) {
        printf("�޷����ļ���\n");
        return;
    }
    
    fprintf(file, "num name math english computer sum average >90\n");
    for (int i = 0; i < size; i++) {
        fprintf(file, "%06d %s %d %d %d %d %.2f %c\n",
            students[i].num, students[i].name, students[i].math, students[i].english,
            students[i].computer, students[i].sum, students[i].average, students[i].flag);
    }
    
    fclose(file);
}

int main() {
    int num, math, english, computer;
    char name[20];
    int size = 30;
    Student *students = malloc(size * sizeof(Student));

    for (int i = 0; i < size; i++) {
        printf("�������%dλѧ����ѧ�ţ�", i + 1);
        scanf("%d", &num);
        printf("�������%dλѧ����������", i + 1);
        scanf("%s", name);
        printf("�������%dλѧ������ѧ�ɼ���", i + 1);
        scanf("%d", &math);
        printf("�������%dλѧ����Ӣ��ɼ���", i + 1);
        scanf("%d", &english);
        printf("�������%dλѧ���ļ�����ɼ���", i + 1);
        scanf("%d", &computer);
        
        float average = (float)(math + english + computer) / 3;
        char flag = average > 90 ? 'Y' : 'N';
        
        students[i].num = num;
        strcpy(students[i].name, name);
        students[i].math = math;
        students[i].english = english;
        students[i].computer = computer;
        students[i].sum = math + english + computer;
        students[i].average = average;
        students[i].flag = flag;
    }
    
    saveToFile(students, size);
    
    printf("�ɼ��ѱ��浽e:\\stuInfo.txt�ļ��С�\n");
    
    free(students);
    
    return 0;
}
