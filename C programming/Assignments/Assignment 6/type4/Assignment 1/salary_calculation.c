#include<stdio.h>
int salary(int,int,int,int,int);
int main() {
	int basic;
	printf("enter basic salary");
	scanf("%d",&basic);
	int da,ta,hra,totalSal=0;
	int x=salary(basic,da,ta,hra,totalSal);
	printf("%d",x);

}
int salary(int basic,int da,int ta,int hra,int totalSal){
	
	if(basic<=5000){
		da=basic*0.10;
		ta=basic*0.20;
		hra=basic*0.25;
			
	}
	else{
		da=basic*0.15;
		ta=basic*0.25;
		hra=basic*0.30;
	}
	totalSal=basic+da+ta+hra;
	return totalSal;
}