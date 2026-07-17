#include<stdio.h>
#include<string.h>
typedef struct Employee
{
	int id;
	char name[50];
	int salary;
}Employee;
void storeEmployee(Employee* earr,int size);
void displayEmployee(Employee* earr,int size);
void main()
{
	int size;
	printf("Enter size:");
	scanf("%d",&size);
	Employee earr[size];
	
	printf("Enter empolyee details:");
	storeEmployee(earr,size);
	
	printf("Employee details are\n");
	displayEmployee(earr,size);
}
void storeEmployee(Employee* earr,int size)
{
	for(int i=0;i<size;i++)
	{
	printf("enter employee id:");
	scanf("%d",&(earr+i)->id);
	printf("enter name:\n");
	fflush(stdin);
	gets((earr+i)->name);
	printf("Enter salary:\n");
	scanf("%d",&(earr+i)->salary);
    }
}
void displayEmployee(Employee* earr,int size)
{
	for(int i=0;i<size;i++)
	{
	printf("id:%d",(earr+i)->id);
	printf("name:%s\n",(earr+i)->name);
	printf("salary:%d\n",(earr+i)->salary);
    }
}