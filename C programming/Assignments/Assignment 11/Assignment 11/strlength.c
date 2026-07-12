#include<stdio.h>
int mystrlength(char*);
void main()
{
	char str[]="hello";
	int length=mystrlength(str);
	printf("%d",length);
}
int mystrlength(char* str)
{
	int i=0;
	while(str[i]!='\0'){
	    i++;	
	}
	return i;
		
}