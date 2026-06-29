#include<stdio.h>
int ch_case(char);
 void main(){
 	char ch;
 	printf("enter ch:");
 	scanf("%c",&ch);
  int x=ch_case(ch);
  if(x==1)
  printf("uppercase");
  else if(x==0)
  printf("lowecase");
  else
  printf("not a character");
 }
 int ch_case(char al){
 	
	if(al>='A'&&al<='Z'){
		return 1;
	}
	else if(al>='a'&&al<='z'){
		return 0;
	}
	else
	return -1;
 }