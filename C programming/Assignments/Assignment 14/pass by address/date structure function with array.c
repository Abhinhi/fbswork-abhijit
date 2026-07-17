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
	Date darr[size];
    printf("Enter details:\n");
	storedate(darr,size);
	
	printf("details are\n");
	displaydate(darr,size);

}
void storedate(Date* darr,int size)
{	
    for(int i=0;i<size;i++)
    {
	printf("enter date ");
	scanf("%d",&(darr+i)->date);
	printf("enter month");
	fflush(stdin);
	gets((darr+i)->month);
	printf("Enter year:");
	scanf("%d",&(darr+i)->year);
    }
}
void displaydate(Date* darr,int size)
{
	for(int i=0;i<size;i++)
	{
	printf("date:%d\n",(darr+i)->date);
	printf("month:%s\n",(darr+i)->month);
	printf("year:%d\n",(darr+i)->year);
    }
}