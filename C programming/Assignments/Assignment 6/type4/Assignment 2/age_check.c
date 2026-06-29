#include<stdio.h>
int agecheck(int);
void main(){
	int age;
	printf("enter age:");
	scanf("%d",&age);
	int category=agecheck(age);
	if(category==0)
	printf("child");
	else if(category==1)
	printf("teenager");
	else if(category==2)
	printf("adult");
	else
	printf("senior");
}
int agecheck(int age){
	if(age<12){
		return 0;
	}
	else if(age<=19){
		return 1;
	}
	else if(age<=59){
		return 2;
	}
	else{
		return 3;
	}
}