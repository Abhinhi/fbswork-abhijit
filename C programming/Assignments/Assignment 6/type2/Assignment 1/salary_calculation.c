#include<stdio.h>
int salary();
int main() {
	int x=salary();
	printf("%d",x);

}
int salary(){
	int basic;
	printf("enter basic salary");
	scanf("%d",&basic);
	int da,ta,hra,totalSal=0;
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