#include<stdio.h>
int add();
int sub();
int mul();
int div();
int mod();
void main(){
	printf(" 1 for addition \n 2 for substraction \n 3 for multiplication \n 4 for division \n 5 for modulus");
	int choice;
	scanf("%d",&choice);
	if(choice==1)
	{
		int x=add();
		printf("%d",x);
	}
	else if(choice==2)
	{
		int x=sub();
		printf("%d",x);
	}
	else if(choice==3)
	{
	int x=mul();
	printf("%d",x);
	}
	else if(choice==4)
	{
	int x=div();
	printf("%d",x);	
	}
	else if(choice==5)
	{
	int x=mod();
	printf("%d",x);	
	}
	else
	{
		printf("invalid option");
	}
	
}
int add()
{
	int no1,no2;
	printf("enter number");
	scanf("%d%d",&no1,&no2);
	int res=no1+no2;
	return res;
}
int sub()
{
	int no1,no2;
	printf("enter number");
	scanf("%d%d",&no1,&no2);
	int res=no1-no2;
	return res;
}
int mul()
{
	int no1,no2;
	printf("enter number");
	scanf("%d%d",&no1,&no2);
	int res=no1*no2;
	return res;
}
int div()
{
	int no1,no2;
	printf("enter number");
	scanf("%d%d",&no1,&no2);
	int res=no1/no2;
	return res;
}
int mod()
{
int no1,no2;
	printf("enter number");
	scanf("%d%d",&no1,&no2);
	int res=no1%no2;
	return res;	
}