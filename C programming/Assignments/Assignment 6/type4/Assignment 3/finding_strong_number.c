#include<stdio.h>
int verifystrongnumber(int,int,int,int);
void main() {
	int n,temp,rem,sum=0;
	printf("enter number:");
	scanf("%d",&n);
	temp=n;
	int x=verifystrongnumber(n,temp,rem,sum);
	if(x==1)
	printf("strong number");
	else
	printf("not strong number");

            }
int verifystrongnumber(int n,int temp,int rem,int sum) {
	
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
		return 1;
	} else {
		return 0;
	}
}