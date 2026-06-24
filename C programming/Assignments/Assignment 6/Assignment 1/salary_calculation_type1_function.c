#include<stdio.h>
int basic;
void low_salary();
void high_salary();
void salary();
void main() {
	salary();
}
void salary() {
	printf("enter basic salary:");
	scanf("%d",&basic);
	int da,ta,hra,totalSal=0;
	if(basic<=5000) {
		low_salary();
	} else {
		high_salary();
	}

}
void low_salary() {
	int da,ta,hra,total_sal;
	da=basic*0.10;
	ta=basic*0.20;
	hra=basic*0.25;
	total_sal=basic+da+ta+hra;
	printf("%d",total_sal);
}
void high_salary() {
	int da,ta,hra,total_sal;
	da=basic*0.15;
	ta=basic*0.25;
	hra=basic*0.30;
	total_sal=basic+da+ta+hra;
	printf("%d",total_sal);
}