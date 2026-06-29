#include<stdio.h>
void salary(int);
int main() {
	int basic;
	printf("enter basic salary");
	scanf("%d",&basic);
	salary(basic);
}
void salary(int basic) {
	int da,ta,hra,totalSal=0;
	if(basic<=5000) {
		da=basic*0.10;
		ta=basic*0.20;
		hra=basic*0.25;

	} else {
		da=basic*0.15;
		ta=basic*0.25;
		hra=basic*0.30;
	}
	totalSal=basic+da+ta+hra;
	printf("total salary:%d",totalSal);
}