#include<stdio.h>
int even_odd();
void main() {
	int x=even_odd();
	if(x==1)
		printf("even");
	else
		printf("odd");
	}
	int even_odd() {
	int n;
	printf("enter number:");
	scanf("%d",&n);
	return(n%2==0);
}