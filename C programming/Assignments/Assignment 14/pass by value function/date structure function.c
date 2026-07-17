#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Date
{
	int date;
	char month[20];
	int year;
	
}Date;
Date storedate();
void displaydate(Date D);
void main()
{
	Date D1,D2;
    printf("Enter D1 details:\n");
	D1=storedate();
	
	printf("Enter D2 details:\n");
	D2=storedate();
	printf("D1 details are\n");
	displaydate(D1);
	
	printf("D2 details are\n");
	displaydate(D2);

}
Date storedate()
{
	Date temp;
	
	printf("enter date ");
	scanf("%d",&temp.date);
	printf("enter month");
	fflush(stdin);
	gets(temp.month);
	printf("Enter year:");
	scanf("%d",&temp.year);
	return temp;
}
void displaydate(Date D)
{
	printf("date:%d\n",D.date);
	printf("month:%s\n",D.month);
	printf("year:%d\n",D.year);
}