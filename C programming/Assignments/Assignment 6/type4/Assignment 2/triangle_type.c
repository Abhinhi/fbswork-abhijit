#include<stdio.h>
int triangletype(int,int,int);
void main(){int a,b,c;
	printf("enter a b c:");
	scanf("%d%d%d",&a,&b,&c);
	int x=triangletype(a,b,c);
	if(x==1)
	printf("equilateral triangle");
	else if(x==2)
	printf("isosceles trianle");
	else
	printf("scalene triangle");
	
}
int triangletype(int a,int b,int c){
	
	if(a==b&&b==c)
	return 1;
	else if(a==b||b==c||c==a)
	return 2;
	else 
	return 0;
}