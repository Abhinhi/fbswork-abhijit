#include<stdio.h>
void triangletype();
void main(){
	triangletype();
	
}
void triangletype(){
	int a,b,c;
	printf("enter a b c:");
	scanf("%d%d%d",&a,&b,&c);
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
			printf("scalene triangle");
		}
	}
}