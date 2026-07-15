#include<stdio.h>
void verifypalindrome(int* n);
void main() {
	int n;
	printf("enter number:");
	scanf("%d",&n);
	verifypalindrome(&n);

}
void verifypalindrome(int* n) {
    int temp,rem,rev=0;
	temp=*n;
	while(temp>0) {
		rem=temp%10;
		rev=rev*10+rem;
		temp=temp/10;
	}
	if(rev==*n) {
		printf("palindrome");
	} else {
		printf("not palindrome");
	}
}