#include<stdio.h>
int main(){
	int min = 342;
	int hours,rmin;
	hours = min/60;
	rmin = min%60;
	printf("hours :%d\nrmin:%d\n",hours,rmin);
	return 0;
}