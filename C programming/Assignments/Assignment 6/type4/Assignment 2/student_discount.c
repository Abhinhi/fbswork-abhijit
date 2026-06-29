#include<stdio.h>
int studentdiscount(int,char,float);
void main(){
	int price;
	printf("enter price:");
	scanf("%d",&price);
	char student;
	printf("is student:");
	fflush(stdin);
	scanf("%c",&student);
 float discount=studentdiscount(price,student,discount);
 printf("%.2f",discount);	
}
int studentdiscount(int price,char student,float discount){
	
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
