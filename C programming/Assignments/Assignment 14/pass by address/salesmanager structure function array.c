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
void storeEdetails(salesmanager*,int);
void displayEdetails(salesmanager*,int);
void main()
{
	int size;
	printf("Enter size:");
	scanf("%d",&size);
	salesmanager earr[size];
	
	printf("Enter e details:\n");
	storeEdetails(earr,size);
	
	printf("e details are\n");
	displayEdetails(earr,size);
	
}
void storeEdetails(salesmanager* earr,int size)
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
	printf("Enter incentive:");
	scanf("%d",&(earr+i)->incentive);
	printf("enter target");
	scanf("%d",&(earr+i)->target);
    }
}
void displayEdetails(salesmanager* earr,int size)
{
	for(int i=0;i<size;i++)
	{
	printf("id:%d",(earr+i)->id);
	printf("name:%s\n",(earr+i)->name);
	printf("salary:%d\n",(earr+i)->salary);
	printf("incentive:%d\n",(earr+i)->incentive);
	printf("target%d\n",(earr+i)->target);
    }
}