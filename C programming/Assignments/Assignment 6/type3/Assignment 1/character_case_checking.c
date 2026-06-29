#include<stdio.h>
void ch_case(char);
 void main(){
 	char ch;
 	printf("enter ch:");
 	scanf("%c",&ch);
  ch_case(ch);
  
 }
 void ch_case(char al){
 	
	if(al>='A'&&al<='Z'){
		printf("uppercase");
	}
	else if(al>='a'&&al<='z'){
		printf("lowercase");
	}
	else
	printf("not a character");
 }