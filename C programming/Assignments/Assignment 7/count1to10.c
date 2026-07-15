#include<stdio.h>
void count1ton(int*);
void main() {
	int n;
	printf("enter number:");
	scanf("%d",&n);
	count1ton(&n);
}
void count1ton(int *n) {
	int i=1;
	while(i<=*n) {
		printf("%d ",i);
		i++;
	}
}