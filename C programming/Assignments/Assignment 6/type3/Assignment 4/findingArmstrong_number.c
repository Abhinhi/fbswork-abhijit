#include<stdio.h>
int getcount(int);
int getpower(int,int);
void isArmstrong(int);
void main()
{
	int no;
	printf("enter a number");
	scanf("%d",&no);
	isArmstrong(no);
}
int getcount(int temp)
{   
	int count=0;
	if (temp==0)
	  count=1;
	else{
	while(temp>0)
	{
		count++;
		temp=temp/10;
	}	
}
return count;
}
int getpower(int base,int exp )
{
	int res=1;
	for(int i=1;i<=exp;i++)
	{
			res=res*base;
		}
		return res;
}
void isArmstrong(int no)
{
	for(int i=1;i<=no;i++)
	{
	int temp=i;
	int count=getcount(temp);
	int sum=0;
	while(temp>0)
	{
		int rem=temp%10;
		sum =sum+getpower(rem,count);
		temp=temp/10;
	}
	if(i==sum)
	printf("%d ",i);
		
}
}
