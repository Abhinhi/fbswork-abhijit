#include<stdio.h>
#include<string.h>
typedef struct HR
{
	int id;
	char name[50];
	int salary;
	int commission;
}HR;
HR storedetails();
void displayEmployee(HR);
void main()
{
	HR e1,e2;
	e1.id=20121;
	strcpy(e1.name,"shubham");
	e1.salary=85000;
	e1.commission=1000;
	
	printf("Enter e1 details:\n");
	e1=storedetails();
	
	printf("Enter e1 details:\n");
	e2=storedetails();
	
	
	printf("e1 Employee details are\n");
	displayEmployee(e1);
	
	printf("e2 Employee details are\n");
	displayEmployee(e2);
}
HR storedetails()
{
	HR temp;
	printf("enter employee id:");
	scanf("%d",&temp.id);
	printf("enter name:\n");
	fflush(stdin);
	gets(temp.name);
	printf("Enter salary:\n");
	scanf("%d",&temp.salary);
	printf("Enter commision:");
	scanf("%d",&temp.commission);
	return temp;
}
void displayEmployee(HR e)
{
	printf("id:%d",e.id);
	printf("name:%s\n",e.name);
	printf("salary:%d\n",e.salary);
	printf("commission:%d\n",e.commission);
}