#include<stdio.h>
int perfectnumber();
void main() {
	int x=perfectnumber();
	if(x==1)
		printf("perfect number");
	else
		printf("not perfect number");
}
int perfectnumber() {
	int n,i=1,sum=0;
	printf("enter number:");
	scanf("%d",&n);
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