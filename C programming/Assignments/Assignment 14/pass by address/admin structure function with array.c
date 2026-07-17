#include<stdio.h>
#include<string.h>
typedef struct Admin
{
	int id;
	char name[50];
	int salary;
	int allowance;
} Admin;
void storeEdetails(Admin* arr,int size)
{
	for(int i=0;i<size;i++)
	{
	
	printf("enter employee id:");
	scanf("%d",&(arr+i)->id);
	printf("enter name:\n");
	fflush(stdin);
	scanf("%s",(arr+i)->name);
	printf("Enter salary:\n");
	scanf("%d",&(arr+i)->salary);
	printf("Enter Allowance:");
	scanf("%d",&(arr+i)->allowance);
   }
}
void displayEdetails(Admin* arr,int size)
{
	for(int i=0;i<size;i++)
	{
	printf("id:%d\n",(arr+i)->id);
	printf("name:%s\n",(arr+i)->name);
	printf("salary:%d\n",(arr+i)->salary);
	printf("allowance%d\n",(arr+i)->allowance);
}
}
void main()
{
	int size;
	printf("Enter size:");
	Admin arr[size];
	printf("enter e1 details:\n");
	storeEdetails(arr,size);
	
	printf("e1 employee details are\n");
	displayEdetails(arr,size);
	
}


