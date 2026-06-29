#include<stdio.h>
int perfectnumber(int,int,int);
void main() {
	int n,i=1,sum=0;
	printf("enter number:");
	scanf("%d",&n);
	int x=perfectnumber(n,i,sum);
	if(x==1)
		printf("perfect number");
	else
		printf("not perfect number");
}
int perfectnumber(int n,int i,int sum) {
	
	while(i<n) {
		if(n%i==0) {
			sum+=i;
		}
		i++;
	}
	if(sum==n) {
		return 1;
	} else {
		return 0;
	}
}