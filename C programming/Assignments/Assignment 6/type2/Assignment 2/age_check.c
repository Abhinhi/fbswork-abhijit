#include<stdio.h>
int agecheck();
void main(){
	int category=agecheck();
	if(category==0)
	printf("child");
	else if(category==1)
	printf("teenager");
	else if(category==2)
	printf("adult");
	else
	printf("adult");
}
int agecheck(){
	int age;
	printf("enter age:");
	scanf("%d",&age);
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