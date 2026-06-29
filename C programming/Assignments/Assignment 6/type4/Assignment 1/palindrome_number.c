#include<stdio.h>
int palindrome(int,int);
void main(){
	int num;
	printf("enter number:");
	scanf("%d",&num);
	int r1,r2,r3,rev;
	r1=(num%10)*100;
	r2=((num/10)%10)*10;
	r3=num/100;
	rev=r1+r2+r3;
	int x=palindrome(num,rev);
	if(x==1)
	printf("palindrome");
	else
	printf("not palindrome");
}
int palindrome(int num,int rev){
	if(num==rev){
		return 1;
	}
	else{
		return 0;
	}
}