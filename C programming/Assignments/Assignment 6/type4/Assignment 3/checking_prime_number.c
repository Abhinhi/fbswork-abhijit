#include<stdio.h>
int checkingprime(int);
void main(){
	int n;
	printf("enter number:");
	scanf("%d",&n);
	int x=checkingprime(n);
	if(x==1)
	printf("prime");
	else
	printf("not prime");
}
int checkingprime(int n){
	
	int i=1;
	int count=0;
	while(i<=n){
		if(n%i==0){
			count++;
		}
		i++;
	}
	if(count==2){
		return 1;
	}
	else{
		return 0;
	}
}