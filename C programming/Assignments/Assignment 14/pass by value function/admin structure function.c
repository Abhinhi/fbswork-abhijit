#include<stdio.h>
#include<string.h>
typedef struct Admin
{
	int id;
	char name[50];
	int salary;
	int allowance;
} Admin;
Admin storeEdetails();
void displayEdetails(Admin);
void main()
{
	Admin e1,e2;
	printf("enter e1 details:\n");
	e1=storeEdetails();
	
	printf("Enter e2 details:\n");
	e2=storeEdetails();
	
	printf("e1 employee details are\n");
	displayEdetails(e1);
	
	printf("e2 employee details are\n");
	displayEdetails(e2);
	
}
Admin storeEdetails()
{
	Admin temp;
	
	printf("enter employee id:");
	scanf("%d",&temp.id);
	printf("enter name:\n");
	fflush(stdin);
	scanf("%s",temp.name);
	printf("Enter salary:\n");
	scanf("%d",&temp.salary);
	printf("Enter Allowance:");
	scanf("%d",&temp.allowance);
	return temp;
}
void displayEdetails(Admin e)
{
	printf("id:%d\n",e.id);
	printf("name:%s\n",e.name);
	printf("salary:%d\n",e.salary);
	printf("allowance%d\n",e.allowance);
}
