#include<stdio.h>
void greatestofthree();
void main() {
	greatestofthree();
}
void greatestofthree() {
	int a,b,c;
	printf("enter values of a b c:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b) {
		if(a>c) {
			printf("a is greater");
		} else
			printf("c is greater");
	} else {
		if(b>c)
			printf("b is greater");
		else
			printf("c is greater");
	}
}