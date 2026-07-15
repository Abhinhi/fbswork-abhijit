#include<stdio.h>
void checkingprime();
void main(){
	checkingprime();
}
void checkingprime(){
	int n;
	printf("enter number:");
	scanf("%d",&n);
	int i=1;
	int count=0;
	while(i<=n){
		if(n%i==0){
			count++;
		}
		i++;
	}
	if(count==2){
		printf("prime");
	}
	else{
		printf("not prime");
	}
}