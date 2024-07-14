#include <stdio.h>

/*
样例
1 John 25 2500.20 MainStreet
2 Jane 30 3500.50 HighStreet
3 Jim 40 4500.75 ParkAvenue
*/

// 定义一个结构体，包括职工号、职工姓名、年龄、工资、地址
struct Employee {
	int empNo;
	char name[20];
	int age;
	float salary;
	char address[100];
};

int main() {
	// 声明结构体数组
	struct Employee employees[3];
	// 循环输入员工信息
	int i;
	for(i = 0; i < 3; i++) {
		
		scanf("%d %s %d %f %s", &employees[i].empNo,
		      employees[i].name, &employees[i].age, &employees[i].salary,
		      employees[i].address);
	}

	// 输出员工信息
	printf("\n职工信息如下：\n");
	for(i = 0; i < 3; i++) {
		printf("职工号：%d\n", employees[i].empNo);
		printf("职工姓名：%s\n",employees[i].name);
		printf("年龄：%d\n", employees[i].age);
		printf("工资：%.2f\n", employees[i].salary);
		printf("地址：%s\n", employees[i].address);
		printf("\n");
	}

	return 0;
}

