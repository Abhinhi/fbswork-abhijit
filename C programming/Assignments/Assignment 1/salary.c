#include<stdio.h>
int main(){
	int basic=6000;
	int da,ta,hra;
	if(basic<=5000){
		da=10;
		ta=20;
		hra=25;
	}
	else{
		da=15;
		ta=25;
		hra=30;
	}
	printf("da:%d ta:%d hra:%d",da,ta,hra);
	return 0;
}