#include<stdio.h>
void main(){
	int price=550;
	float discount;
	char student='y';
	if(student=='y'){
		if(price>500){
			discount=0.20*price;
		}
		else{
			discount=0.10*price;
		}
	}
	else{
		if(price>600){
			discount=0.15*price;
		}
		else{
			discount=0;
		}
	}
	printf("%2f",discount);
}