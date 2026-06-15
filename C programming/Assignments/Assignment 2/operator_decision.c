#include<stdio.h>
void main(){
	int num1=10;
	int num2=5;
	char op='%';
	if(op=='+'){
		printf("addition =%d",num1+num2);
	}
	else{
		if(op=='-'){
		printf("substraction =%d",num1-num2);
	}
	else{
		if(op=='*'){
		printf("multiplication =%d",num1*num2);
	}
	else{
	if(op=='/'){
		printf("division =%d",num1/num2);
		}
		else{
			if(op=='%'){
		printf("modulus =%d",num1%num2);
		}
}
}
}
}
}