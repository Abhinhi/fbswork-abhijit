#include<stdio.h>
#include<string.h>
void main(){
	char str1[]="hello";
	char str2[]="helium";
	int result=strncmp(str1,str2,3);
	if(result==0)
	printf("first 3 character are equal");
	else
	printf("first 3 character are different");
	
}