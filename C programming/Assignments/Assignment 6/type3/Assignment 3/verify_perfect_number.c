#include<stdio.h>
void verifyperfectnumber(int);
void main(){
	int n;
	printf("enter number:");
	scanf("%d",&n);
	verifyperfectnumber(n);
	}
void verifyperfectnumber(int n){
	int i=1,sum=0;
	while(i<n)
	{
		if(n%i==0){
		sum=sum+i;
	}
		i++;
	}
	if(sum==n)
	printf("perfect number");
	else
	printf("not perfect number");
}
