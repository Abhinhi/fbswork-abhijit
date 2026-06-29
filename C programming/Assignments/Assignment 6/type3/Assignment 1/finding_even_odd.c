#include<stdio.h>
void findingEvenOdd(int);
void main(){
	int n;
	printf("enter number:");
	scanf("%d",&n);
	findingEvenOdd(n);
	
}
void findingEvenOdd(int n){
	if(n%2==0)
	printf("even");
	else
	printf("odd");
}