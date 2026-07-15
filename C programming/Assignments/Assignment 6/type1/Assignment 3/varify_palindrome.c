#include<stdio.h>
void verifypalindrome();
void main(){
	verifypalindrome();
}
void verifypalindrome(){
	int n,temp,rem,rev=0;
	printf("enter number:");
	scanf("%d",&n);
	temp=n;
	while(temp>0){
		rem=temp%10;
		rev=rev*10+rem;
		temp=temp/10;
	}
	if(rev==n){
		printf("palindrome");
	}
	else{
		printf("not palindrome");
	}
}