#include<stdio.h>
void verifyarmstrong(int* n);
   
void main(){
	int n;
	printf("enter number:");
	scanf("%d",&n);
	verifyarmstrong(&n);
}
void verifyarmstrong(int* n){
	int temp,rem,sum=0;
	temp=*n;
	while(temp>0){
		rem=temp%10;
		sum=sum+rem*rem*rem;
		temp=temp/10;
	}
	if(sum==*n){
		printf("armstrong");
	}
	else{
		printf("not armstrong");
	}
}