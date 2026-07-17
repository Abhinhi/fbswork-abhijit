#include<stdio.h>
#include<stdlib.h>
typedef struct HR
{
	int id;
	char name[50];
	int salary;
	int commission;
}HR;
void storedetails(HR*,int);
void displayEmployee(HR*,int);
void main()
{
	int size;
	printf("Enter size:");
	scanf("%d",&size);
	HR* ptr=(HR*)malloc(size*sizeof(HR));
	
	printf("Enter Employee details:\n");
	storedetails(ptr,size);
	
	printf("Employee details are\n");
	displayEmployee(ptr,size);
}
void storedetails(HR* ptr,int size)
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
	printf("Enter commision:");
	scanf("%d",&ptr[i].commission);
    }
}
void displayEmployee(HR* ptr,int size)
{
	for(int i=0;i<size;i++)
	{
//	printf("id:%d",(earr+i)->id);
	printf("id:%d",ptr[i].id);
	printf("name:%s\n",ptr[i].name);
	printf("salary:%d\n",ptr[i].salary);
	printf("commission:%d\n",ptr[i].commission);
    }
}