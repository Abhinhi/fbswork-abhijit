#include<stdio.h>
void ch_case();
 void main(){
  ch_case();
 }
 void ch_case(){
 	char ch;
 	printf("enter ch:");
 	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z'){
		printf("uppercase");
	}
	else if(ch>='a'&&ch<='z'){
		printf("lowercase");
	}
	else
	printf("not a character");
 }