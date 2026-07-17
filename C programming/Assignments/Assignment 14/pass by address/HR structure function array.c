#include<stdio.h>
#include<string.h>
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
	HR earr[size];
	
	printf("Enter Employee details:\n");
	storedetails(earr,size);
	
	printf("Employee details are\n");
	displayEmployee(earr,size);
}
void storedetails(HR* earr,int size)
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
	printf("Enter commision:");
	scanf("%d",&(earr+i)->commission);
    }
}
void displayEmployee(HR* earr,int size)
{
	for(int i=0;i<size;i++)
	{
	printf("id:%d",(earr+i)->id);
	printf("name:%s\n",(earr+i)->name);
	printf("salary:%d\n",(earr+i)->salary);
	printf("commission:%d\n",(earr+i)->commission);
    }
}