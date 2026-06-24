#include<stdio.h>
void palindrome();
void main(){
	palindrome();
}
void palindrome(){
	int num;
	printf("enter number:");
	scanf("%d",&num);
	int r1,r2,r3,rev;
	r1=(num%10)*100;
	r2=((num/10)%10)*10;
	r3=num/100;
	rev=r1+r2+r3;
	if(num==rev){
		printf("number is palindrome");
	}
	else{
		printf("number is not palindrome");
	}
}