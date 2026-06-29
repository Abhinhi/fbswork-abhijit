#include<stdio.h>
int verifyarmstrong();
   
void main(){
	int x=verifyarmstrong();
	if(x==1)
   printf("armstrong");
   else
   printf("not armstrong");
}
int verifyarmstrong(){
	int n,temp,rem,sum=0;
	printf("enter number:");
	scanf("%d",&n);
	temp=n;
	while(temp>0){
		rem=temp%10;
		sum=sum+rem*rem*rem;
		temp=temp/10;
	}
	if(sum==n){
		return 1;
	}
	else{
		return 0;
	}
}