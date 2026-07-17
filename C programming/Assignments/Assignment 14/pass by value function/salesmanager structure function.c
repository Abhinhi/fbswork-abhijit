#include<stdio.h>
#include<string.h>
typedef struct sales_manager
{
	int id;
	char name[50];
	int salary;
	int incentive;
	int target;
}salesmanager;
salesmanager storeEdetails();
void displayEdetails(salesmanager e);
void main()
{
	struct sales_manager e1,e2;
	
	printf("Enter e1 details:\n");
	e1=storeEdetails();
	
	printf("Enter e1 details:\n");
	e2=storeEdetails();
	
	printf("e1 details are\n");
	displayEdetails(e1);
	
	printf("e2 details are\n");
	displayEdetails(e2);
	
}
salesmanager storeEdetails()
{
	salesmanager temp;
	printf("enter employee id:");
	scanf("%d",&temp.id);
	printf("enter name:\n");
	fflush(stdin);
	gets(temp.name);
	printf("Enter salary:\n");
	scanf("%d",&temp.salary);
	printf("Enter incentive:");
	scanf("%d",&temp.incentive);
	printf("enter target");
	scanf("%d",&temp.target);
	return temp;
}
void displayEdetails(salesmanager e)
{
	printf("id:%d",e.id);
	printf("name:%s\n",e.name);
	printf("salary:%d\n",e.salary);
	printf("incentive:%d\n",e.incentive);
	printf("target%d\n",e.target);
}