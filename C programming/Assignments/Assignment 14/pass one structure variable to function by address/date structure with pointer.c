#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Date
{
	int date;
	char month[20];
	int year;
	
}Date;
void storedate(Date*,int);
void displaydate(Date*,int);
void main()
{
	int size;
	printf("Enter size:");
	scanf("%d",&size);
	Date* ptr=(Date*)malloc(size*sizeof(Date));
    printf("Enter details:\n");
	storedate(ptr,size);
	
	printf("details are\n");
	displaydate(ptr,size);

}
void storedate(Date* ptr,int size)
{	
    for(int i=0;i<size;i++)
    {
	printf("enter date ");
	//scanf("%d",&(darr+i)->date);
	scanf("%d",&ptr[i].date);
	printf("enter month");
	fflush(stdin);
	gets(ptr[i].month);
	printf("Enter year:");
	scanf("%d",&ptr[i].year);
    }
}
void displaydate(Date* ptr,int size)
{
	for(int i=0;i<size;i++)
	{
	//printf("date:%d\n",(darr+i)->date);
	printf("date:%d\n",ptr[i].date);
	printf("month:%s\n",ptr[i].month);
	printf("year:%d\n",ptr[i].year);
    }
}