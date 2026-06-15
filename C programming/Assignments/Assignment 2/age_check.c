#include<stdio.h>
void main(){
	int age=15;
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