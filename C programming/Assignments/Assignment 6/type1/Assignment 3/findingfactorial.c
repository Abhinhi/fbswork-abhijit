#include<stdio.h>
void finding_factorial();
void main(){
	finding_factorial();
}
void finding_factorial(){
	int n,i=1,fact=1;
	printf("enter nummber");
	scanf("%d",&n);
	while(i<=n){
		fact=fact*i;
		i++;
	}
	printf("%d",fact);
}