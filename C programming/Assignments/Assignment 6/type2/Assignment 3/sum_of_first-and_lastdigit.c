#include<stdio.h>
int sumfirstlast();
void main(){
	int x=sumfirstlast();
	printf("sum of first and last digit is:%d",x);
}
int sumfirstlast(){
	int n,first,last,sum;
	printf("enter number:");
	scanf("%d",&n);
	last =n%10;
	first=n;
	while(first>=10){
		first=first/10;
	}
	sum=first+last;
	return sum;
}