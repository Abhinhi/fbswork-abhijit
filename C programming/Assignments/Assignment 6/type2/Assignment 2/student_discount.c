#include<stdio.h>
int studentdiscount();
void main(){
 float discount=studentdiscount();
 printf("%.2f",discount);	
}
int studentdiscount(){
	int price;
	printf("enter price:");
	scanf("%d",&price);
	float discount;
	char student;
	printf("is student:");
	fflush(stdin);
	scanf("%c",&student);
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
	return discount;
}