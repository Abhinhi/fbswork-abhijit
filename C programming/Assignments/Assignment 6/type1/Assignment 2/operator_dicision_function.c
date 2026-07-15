#include<stdio.h>
int num1,num2;
void sum();
void sub();
void multi();
void div();
void mod();
void operator_decision();
void main() {
	operator_decision();
}
void operator_decision() {

	printf("enter num1 and num2:");
	scanf("%d %d",&num1,&num2);
	char op;
	printf("enter op:");
	fflush(stdin);
	scanf(" %c",&op);
	if(op=='+')
		sum();
	else if(op=='-')
		sub();
	else if(op=='*')
		multi();
	else if(op=='/')
		div();
	else if(op=='%')
		mod();
}
void sum() {
	printf("%d",num1+num2);
}
void sub() {
	printf("%d",num1-num2);
}
void multi() {
	printf("%d",num1*num2);
}
void div() {
	printf("%d",num1/num2);
}
void mod() {
	printf("%d",num1%num2);
}