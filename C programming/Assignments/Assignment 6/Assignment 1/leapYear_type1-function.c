#include<stdio.h>
void leap_year();
void main(){
	leap_year();
}
void leap_year(){
	int year;
	printf("enter year:");
	scanf("%d",&year);
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
		printf("leap year");
	}
	else{
		printf("not a leap year");
	}
}