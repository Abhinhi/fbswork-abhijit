#include<stdio.h>
int even_odd(int);
void main(){
	int num,result;
	printf("enter num:");
	scanf("%d",&num);
	result=even_odd(num);
	if(result==1)
	printf("even");
	else
	printf("odd");
	
}
int even_odd(int n){
	if(n%2==0){
		return 1;
	}
	else{
		return 0;
	}
}