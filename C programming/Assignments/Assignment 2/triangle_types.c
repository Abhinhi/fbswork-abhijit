#include<stdio.h>
void main(){
	int a=15,b=20,c=15;
	if(a==b){
		if(b==c){
			printf("equilateral triangle");
		}
		else{
			printf("isosceles trianle");
		}
	}
	else{
		if(a==c||b==c){
			printf("isosceles triangle");
		}
		else{
			printf("scelene triangle");
		}
	}
}