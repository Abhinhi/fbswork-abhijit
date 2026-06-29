#include<stdio.h>
void triangletype(int,int,int);
void main(){int a,b,c;
	printf("enter a b c:");
	scanf("%d%d%d",&a,&b,&c);
	triangletype(a,b,c);
}
void triangletype(int a,int b,int c){
	
	if(a==b&&b==c)
	printf("equilateral triangle");
	else if(a==b||b==c||c==a)
	printf("isosceles triangle");
	else 
	printf("scalene triangle");
}