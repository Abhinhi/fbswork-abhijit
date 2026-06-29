#include<stdio.h>
void greatestofthree(int,int,int);
void main() {
	int a,b,c;
	printf("enter values of a b c:");
	scanf("%d%d%d",&a,&b,&c);
	greatestofthree(a,b,c);


}
void greatestofthree(int a,int b,int c) {

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