#include<stdio.h>
void main(){
	int n=145,temp,rem,sum=0;
	temp=n;
	while(temp>0){
		rem=temp%10;
		int fact=1,i=1;
		while(i<=rem){
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		temp=temp/10;
	}
	if(sum==n){
		printf("strong number");
	}
	else{
		printf("not strong number");
	}
}