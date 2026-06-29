#include<stdio.h>
int vote_eligibility(int);
void main(){
	int age;
		printf("enter age:");
		scanf("%d",&age);
	int x=vote_eligibility(age);
	if(x==1)
	printf("eligible for vote");
	else
	printf("not eligible for vote");
}
int vote_eligibility(int age){
		
	if(age>=18){
		return 1;
	}
	else{
		return 0;
	}
}