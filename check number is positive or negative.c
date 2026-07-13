#include<stdio.h>
void main()
{
	int num;
	printf("Enter number:");
	scanf("%d",&num);
	if(num>0)
	printf("Number is positive");
	elseif(num<0)
	printf("Number is negative");
	else 
	printf("Number is zero");
}