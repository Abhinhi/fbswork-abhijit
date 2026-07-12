#include<stdio.h>
void sumfirstlast(int* n);
void main(){
	int n;
	printf("enter number:");
	scanf("%d",&n);
	sumfirstlast(&n);
}
void sumfirstlast(int* n){
	int first,last;
	last =*n%10;
	first=*n;
	while(first>=10){
		first=first/10;
	}
	printf("sum is:%d",first+last);
}