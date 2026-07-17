#include<stdio.h>
#include<string.h>
typedef struct Admin
{
	int id;
	char name[50];
	int salary;
	int allowance;
} Admin;
void storeEdetails(Admin* ptr,int size)
{
	for(int i=0;i<size;i++)
	{
	
	printf("enter employee id:");
	scanf("%d",&ptr[i].id);
	printf("enter name:\n");
	fflush(stdin);
	scanf("%s",ptr[i].name);
	printf("Enter salary:\n");
	//scanf("%d",&(arr+i)->salary);
	scanf("%d",&ptr[i].salary);
	printf("Enter Allowance:");
	scanf("%d",&ptr[i].allowance);
   }
}
void displayEdetails(Admin* ptr,int size)
{
	for(int i=0;i<size;i++)
	{
	printf("id:%d\n",ptr[i].id);
	//printf("name:%s\n",(ptr+i)->name);
	printf("%s",ptr[i].name);
	printf("salary:%d\n",ptr[i].salary);
	printf("allowance%d\n",ptr[i].allowance);
}
}
void main()
{
	int size;
	printf("Enter size:");
	scanf("%d",&size);
	Admin* ptr=(Admin*)malloc(size*sizeof(Admin));
	printf("enter e1 details:\n");
	storeEdetails(&ptr,size);
	
	printf("e1 employee details are\n");
	displayEdetails(&ptr,size);
	
}


