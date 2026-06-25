#include<stdio.h>
void perfectnumber();
void main(){
	perfectnumber();
}
void perfectnumber(){
	int n,i=1,sum=0;
	printf("enter number:");
	scanf("%d",&n);
	while(i<n){
		if(n%i==0){
			sum+=i;
					}
			i++;		
	}
	if(sum==n){
		printf("perfect");
	}
	else{
		printf("not perfect");
	}
}