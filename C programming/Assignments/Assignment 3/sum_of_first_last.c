#include<stdio.h>
void main(){
	int n=12345,first,last;
	last =n%10;
	first=n;
	while(first>=10){
		first=first/10;
	}
	printf("sum is:%d",first+last);
}