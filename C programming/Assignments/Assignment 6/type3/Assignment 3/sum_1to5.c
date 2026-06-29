#include<stdio.h>
void sum1to5(int,int);
void main(){
	int n=5,sum=0;
	sum1to5(n,sum);
	
}
void sum1to5(int n,int sum){
	int i=1;
	while(i<=n){
		sum=sum+i;
		i++;
		}
	printf("%d",sum);
}