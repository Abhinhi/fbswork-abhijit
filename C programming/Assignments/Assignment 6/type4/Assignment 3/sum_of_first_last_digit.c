#include<stdio.h>
int sumfirstlast(int);
void main(){
	int n;
	printf("enter number:");
	scanf("%d",&n);
	int x=sumfirstlast(n);
	printf("sum of first and last digit is:%d",x);
}
int sumfirstlast(int n){
	int first,last,sum;
	last =n%10;
	first=n;
	while(first>=10){
		first=first/10;
	}
	sum=first+last;
	return sum;
}