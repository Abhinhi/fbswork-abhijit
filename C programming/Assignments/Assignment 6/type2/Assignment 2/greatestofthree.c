#include<stdio.h>
int greatestofthree();
void main() {
	int x = greatestofthree();
	if(x==1)
	printf("a is greater");
	else if(x==2)
	printf("c is greater");
	else if(x==3)
	printf("b is greater");
	else 
	printf("c is greater");
}
int greatestofthree() {
	int a,b,c;
	printf("enter values of a b c:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b) {
		if(a>c) {
			return 1;
		} else
			return 2;
	} else {
		if(b>c)
			return 3;
		else
			return 4;
	}
}