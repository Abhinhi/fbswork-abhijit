#include<stdio.h>
void verifyarmstrong(int,int,int,int);
   
void main(){
	int n,temp,rem,sum=0;
	printf("enter number:");
	scanf("%d",&n);
	verifyarmstrong(n,temp,rem,sum);
}
void verifyarmstrong(int n,int temp,int rem,int sum){
	
	temp=n;
	while(temp>0){
		rem=temp%10;
		sum=sum+rem*rem*rem;
		temp=temp/10;
	}
	if(sum==n){
		printf("armstrong");
	}
	else{
		printf("not armstrong");
	}
}