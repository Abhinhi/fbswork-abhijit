#include<stdio.h>
void agecheck();
void main(){
	agecheck();
}
void agecheck(){
	int age;
	printf("enter age:");
	scanf("%d",&age);
	if(age<12){
		printf("child");
	}
	else if(age<=19){
		printf("teenager");
	}
	else if(age<=59){
		printf("adult");
	}
	else{
		printf("senior");
	}
}