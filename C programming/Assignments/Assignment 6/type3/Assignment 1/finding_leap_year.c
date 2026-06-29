#include<stdio.h>
void findingLeapYear(int);
void main(){
	int year;
	printf("enter year:");
	scanf("%d",&year);
	findingLeapYear(year);
}
void findingLeapYear(int year)
{
	if((year%4==0&&year%100!=0) || (year%400==0))
	printf("leap year");
	else
	printf("not leap year");
}