#include<stdio.h>
void vote_eligibility(int);
void main(){
	int age;
		printf("enter age:");
		scanf("%d",&age);
	vote_eligibility(age);
	
}
void vote_eligibility(int age){
		
	if(age>=18){
		printf("eligible for vote");
	}
	else{
		printf("not eligible for vote");
	}
}