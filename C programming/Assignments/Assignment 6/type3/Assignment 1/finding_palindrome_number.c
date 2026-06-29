#include<stdio.h>
void findingpalindromenumber(int,int);
void main(){
	int n,rev;
	printf("enter number:");
	scanf("%d",&n);
	findingpalindromenumber(n,rev);
	
}
void findingpalindromenumber(int n,int rev)
{
	rev=((n%10)*100)+((((n/10))%10)*10)+(n/100);
	if(n==rev)
	printf("palindrome");
	else
	printf("not palinndrome");
}