#include<stdio.h>
#include<string.h>
typedef struct Employee
{
	int id;
	char name[50];
	int salary;
}Employee;
Employee storeEmployee();
void displayEmployee(Employee e);
void main()
{
	Employee e1,e2;
	
	printf("Enter empolyee details:");
	e1=storeEmployee();
	
	printf("Enter empolyee details:");
	e2=storeEmployee();
	
	printf("e1 employee details are\n");
	displayEmployee(e1);
	
	printf("s2 employee details are\n");
	displayEmployee(e2);
}
Employee storeEmployee()
{
	Employee temp;
	printf("enter employee id:");
	scanf("%d",&temp.id);
	printf("enter name:\n");
	fflush(stdin);
	gets(temp.name);
	printf("Enter salary:\n");
	scanf("%d",&temp.salary);
	return temp;
}
void displayEmployee(Employee e)
{
	printf("id:%d",e.id);
	printf("name:%s\n",e.name);
	printf("salary:%d\n",e.salary);
}