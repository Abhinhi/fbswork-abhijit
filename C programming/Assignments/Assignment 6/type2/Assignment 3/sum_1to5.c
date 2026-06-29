#include<stdio.h>
int sum1to5();
void main(){
	int x=sum1to5();
	printf("%d",x);
}
int sum1to5(){
	int n=5,sum=0;
	int i=1;
	while(i<=n){
		sum=sum+i;
		i++;
		}
	return sum;
}