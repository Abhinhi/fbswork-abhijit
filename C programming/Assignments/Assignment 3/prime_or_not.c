#include<stdio.h>
void main(){
	int n=8;
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