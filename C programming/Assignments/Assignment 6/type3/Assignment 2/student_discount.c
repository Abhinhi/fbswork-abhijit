#include<stdio.h>
void studentdiscount(int,char);
void main(){
	char student;
	printf("is student:");
	fflush(stdin);
	scanf("%c",&student);
	int price;
	printf("enter price:");
	scanf("%d",&price);
    studentdiscount(price,student);	
}
void studentdiscount(int price,char student){
	float discount;
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
	printf("discount is:%.2f",discount);
}
