#include<stdio.h>
void vote_eligibility();
void main(){
	vote_eligibility();
}
void vote_eligibility(){
		int age;
		printf("enter age");
		scanf("%d",&age);
	if(age>=18){
		printf("Eligible for vote");
	}
	else{
		printf("Not Eligible for vote");
	}
}