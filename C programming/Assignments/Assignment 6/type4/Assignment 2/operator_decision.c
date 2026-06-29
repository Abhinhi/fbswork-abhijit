#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int divide(int,int);
int mod(int,int);
void main(){
	printf("enter 1 for addition\n 2 for substraction\n 3 for multiplicaton\n 4 for division\n 5 for mod");
	int choice;
	scanf("%d",&choice);
	int num1,num2;
	printf("enter num1&num2:");
	scanf("%d %d",&num1,&num2);
	if(choice==1)
	{
		int x=add(num1,num2);
		printf("addition is:%d",x);
	}
	else if(choice==2)
	{
		int x=sub(num1,num2);
		printf("substraction is:%d",x);
	}
	else if(choice==3)
	{
		int x=mul(num1,num2);
		printf("multiplication is:%d",x);
	}
	else if(choice==4)
	{
		int x=divide(num1,num2);
		printf("division is:%d",x);
	}
	else if(choice==5)
	{
		int x=mod(num1,num2);
		printf("modulus is:%d",x);
	}
	else
	{
		printf("invalid choice");
	}
}
int add(int num1,int num2)
{
	int res=num1+num2;
	return res;
}
int sub(int num1,int num2)
{
	int res=num1-num2;
	return res;
}
int mul(int num1,int num2)
{
	int res=num1*num2;
	return res;
}
int divide(int num1,int num2)
{
	int res=num1/num2;
	return res;
}
int mod(int num1,int num2)
{
	int res=num1 % num2;
	return res;
}