#include<stdio.h>
int main(){
	char ch = 'A';
	if(ch>='A'&&ch<='Z'){
		printf("uppercase");
	}
	if(ch>='a'&&ch<='z'){
		printf("lowercase");
	}
	return 0;
}