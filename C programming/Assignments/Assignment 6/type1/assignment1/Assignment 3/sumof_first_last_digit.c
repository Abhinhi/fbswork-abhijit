#include<stdio.h>
void sumfirstlast();
void main(){
	sumfirstlast();
}
void sumfirstlast(){
	int n,first,last;
	printf("enter number:");
	scanf("%d",&n);
	last =n%10;
	first=n;
	while(first>=10){
		first=first/10;
	}
	printf("sum is:%d",first+last);
}