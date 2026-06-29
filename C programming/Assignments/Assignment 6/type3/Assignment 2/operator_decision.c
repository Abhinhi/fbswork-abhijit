#include<stdio.h>
void add(int,int);
void sub(int,int);
void mul(int,int);
void divide(int,int);
void mod(int,int);
void main(){
	printf("enter 1 for addition\n 2 for substraction\n 3 for multiplicaton\n 4 for division\n 5 for mod");
	int choice;
	scanf("%d",&choice);
	int num1,num2;
	printf("enter num1&num2:");
	scanf("%d %d",&num1,&num2);
	if(choice==1)
	{
	add(num1,num2);	
	}
	else if(choice==2)
	{
		sub(num1,num2);
	}
	else if(choice==3)
	{
		mul(num1,num2);
	}
	else if(choice==4)
	{
		divide(num1,num2);
	}
	else if(choice==5)
	{
		mod(num1,num2);
	}
	else
	{
		printf("invalid choice");
	}
}
void add(int num1,int num2)
{
	int res=num1+num2;
	printf("addition is:%d",res);
}
void sub(int num1,int num2)
{
	int res=num1-num2;
	printf("substraction is:%d",res);
}
void mul(int num1,int num2)
{
	int res=num1*num2;
	printf("multiplication is:%d",res);
}
void divide(int num1,int num2)
{
	int res=num1/num2;
	printf("division is:%d",res);
}
void mod(int num1,int num2)
{
	int res=num1 % num2;
	printf("modulus is:%d",res);
}