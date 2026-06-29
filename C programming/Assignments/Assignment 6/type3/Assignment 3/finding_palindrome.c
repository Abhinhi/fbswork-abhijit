#include<stdio.h>
void verifypalindrome(int,int,int,int);
void main() {
	int n,temp,rem,rev=0;
	printf("enter number:");
	scanf("%d",&n);
	verifypalindrome(n,temp,rem,rev);

}
void verifypalindrome(int n,int temp,int rem,int rev) {

	temp=n;
	while(temp>0) {
		rem=temp%10;
		rev=rev*10+rem;
		temp=temp/10;
	}
	if(rev==n) {
		printf("palindrome");
	} else {
		printf("not palindrome");
	}
}