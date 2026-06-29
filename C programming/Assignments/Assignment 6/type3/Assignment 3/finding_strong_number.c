#include<stdio.h>
void verifystrongnumber(int,int,int,int);
void main() {
	int n,temp,rem,sum=0;
	printf("enter number:");
	scanf("%d",&n);
	temp=n;
	verifystrongnumber(n,temp,rem,sum);
            }
void verifystrongnumber(int n,int temp,int rem,int sum) {
	
	while(temp>0) {
		rem=temp%10;
		int fact=1,i=1;
		while(i<=rem) {
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		temp=temp/10;
	}
	if(sum==n) {
		printf("strong number");
	} else {
		printf("not strong number");
	}
}