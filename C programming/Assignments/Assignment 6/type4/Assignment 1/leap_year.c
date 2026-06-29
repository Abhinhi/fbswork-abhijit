#include<stdio.h>
int leap_year(int);
void main(){
	int year;
	printf("enter year:");
	scanf("%d",&year);
	int x=leap_year(year);
	if(x==1)
	printf("leap year");
	else
	printf("not leap year");
}
int leap_year(int y){
	
	if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)){
		return 1;
	}
	else{
		return 0;
	}
}