#include<stdio.h>
void even_odd();
int main(){
	even_odd();
	return 0;
}
void even_odd(){

int n;
printf("enter number:");
scanf("%d",&n);
	if(n%2==0){
		printf("number is even");
	}
	else{
		printf("number is odd");
	}
}