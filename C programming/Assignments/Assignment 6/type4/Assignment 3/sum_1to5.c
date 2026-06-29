#include<stdio.h>
int sum1to5(int,int);
void main(){
	int n,sum=0;
	printf("enter number:");
	scanf("%d",&n);
	int x=sum1to5(n,sum);
	printf("%d",x);
}
int sum1to5(int n,int sum){
	int i=1;
	while(i<=n){
		sum=sum+i;
		i++;
		}
	return sum;
}