#include<stdio.h>
int palindrome();
int main(){
 int x= palindrome();
 if(x==1){
 	printf("palindrome");
 }
 else{
 	printf("not palindrome");
 }
}
int palindrome(){
	int num;
	printf("enter number:");
	scanf("%d",&num);
	int r1,r2,r3,rev;
	r1=(num%10)*100;
	r2=((num/10)%10)*10;
	r3=num/100;
	rev=r1+r2+r3;
	if(num==rev){
		return 1;
	}
	else{
		return 0;
	}
}