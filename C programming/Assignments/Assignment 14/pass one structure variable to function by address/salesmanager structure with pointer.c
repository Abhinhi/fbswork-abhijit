#include<stdio.h>
#include<stdlib.h>
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
	salesmanager* ptr=(salesmanager*)malloc(size*sizeof(salesmanager));
	
	printf("Enter e details:\n");
	storeEdetails(ptr,size);
	
	printf("e details are\n");
	displayEdetails(ptr,size);
	
}
void storeEdetails(salesmanager* ptr,int size)
{
	for(int i=0;i<size;i++)
	{
	printf("enter employee id:");
//	scanf("%d",&(earr+i)->id);
	scanf("%d",&ptr[i].id);
	printf("enter name:\n");
	fflush(stdin);
	gets(ptr[i].name);
	printf("Enter salary:\n");
	scanf("%d",&ptr[i].salary);
	printf("Enter incentive:");
	scanf("%d",&ptr[i].incentive);
	printf("enter target");
	scanf("%d",&ptr[i].target);
    }
}
void displayEdetails(salesmanager* ptr,int size)
{
	for(int i=0;i<size;i++)
	{
//	printf("id:%d",(earr+i)->id);
	printf("id:%d",ptr[i].id);
	printf("name:%s\n",ptr[i].name);
	printf("salary:%d\n",ptr[i].salary);
	printf("incentive:%d\n",ptr[i].incentive);
	printf("target%d\n",ptr[i].target);
    }
}