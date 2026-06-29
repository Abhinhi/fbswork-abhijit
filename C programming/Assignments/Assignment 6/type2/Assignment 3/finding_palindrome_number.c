#include<stdio.h>
int verifypalindrome();
void main(){
	int x=verifypalindrome();
	if(x==1)
	printf("palindrome");
	else
	printf("not palindrome");
}
int verifypalindrome(){
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
		return 1;
	}
	else{
		return 0;
	}
}