#include<stdio.h>
void agecheck(int);
void main(){
	int age;
	printf("enter age:");
	scanf("%d",&age);
	agecheck(age);
}
void agecheck(int age){
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