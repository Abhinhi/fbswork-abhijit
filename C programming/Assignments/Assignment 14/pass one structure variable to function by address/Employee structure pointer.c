#include<stdio.h>
#include<stdlib.h>
typedef struct Employee
{
	int id;
	char name[50];
	int salary;
}Employee;
void storeEmployee(Employee*,int);
void displayEmployee(Employee*,int);
void main()
{
	int size;
	printf("Enter size:");
	scanf("%d",&size);
	Employee* ptr=(Employee*)malloc(size*sizeof(Employee));
	
	printf("Enter empolyee details:");
	storeEmployee(ptr,size);
	
	printf("Employee details are\n");
	displayEmployee(ptr,size);
}
void storeEmployee(Employee* ptr,int size)
{
	for(int i=0;i<size;i++)
	{
	printf("enter employee id:");
	//scanf("%d",&(earr+i)->id);
	scanf("%d",&ptr[i].id);
	printf("enter name:\n");
	fflush(stdin);
	gets(ptr[i].name);
	printf("Enter salary:\n");
	scanf("%d",&ptr[i].salary);
    }
}
void displayEmployee(Employee* ptr,int size)
{
	for(int i=0;i<size;i++)
	{
	//printf("id:%d",(earr+i)->id);
	printf("id:%d",ptr[i].id);
	printf("name:%s\n",ptr[i].name);
	printf("salary:%d\n",ptr[i].salary);
    }
}