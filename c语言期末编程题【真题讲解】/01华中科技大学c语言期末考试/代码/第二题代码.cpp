#include <stdio.h>

/*
����
1 John 25 2500.20 MainStreet
2 Jane 30 3500.50 HighStreet
3 Jim 40 4500.75 ParkAvenue
*/

// ����һ���ṹ�壬����ְ���š�ְ�����������䡢���ʡ���ַ
struct Employee {
	int empNo;
	char name[20];
	int age;
	float salary;
	char address[100];
};

int main() {
	// �����ṹ������
	struct Employee employees[3];
	// ѭ������Ա����Ϣ
	int i;
	for(i = 0; i < 3; i++) {
		
		scanf("%d %s %d %f %s", &employees[i].empNo,
		      employees[i].name, &employees[i].age, &employees[i].salary,
		      employees[i].address);
	}

	// ���Ա����Ϣ
	printf("\nְ����Ϣ���£�\n");
	for(i = 0; i < 3; i++) {
		printf("ְ���ţ�%d\n", employees[i].empNo);
		printf("ְ��������%s\n",employees[i].name);
		printf("���䣺%d\n", employees[i].age);
		printf("���ʣ�%.2f\n", employees[i].salary);
		printf("��ַ��%s\n", employees[i].address);
		printf("\n");
	}

	return 0;
}

