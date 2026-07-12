#include<stdio.h>
void verifystrongnumber(int* n);
void main() {
	int n;
	printf("enter number:");
	scanf("%d",&n);
	verifystrongnumber(&n);
            }
void verifystrongnumber(int* n) {
	int temp=*n,rem,sum=0;
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
	if(sum==*n) {
		printf("strong number");
	} else {
		printf("not strong number");
	}
}