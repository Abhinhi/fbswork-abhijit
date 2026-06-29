#include<stdio.h>
int leap_year();
void main() {
	int x = leap_year();
	if(x==1)
		printf("leap year");
	else {
		printf("not leap year");
	}
}
int leap_year() {
	int year;
	printf("enter year:");
	scanf("%d",&year);
	return((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));

}