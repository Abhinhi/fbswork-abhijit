#include<stdio.h>
#include<string.h>
void main(){
	char str1[]="programmingee";
	char* p=strrchr(str1,'g');
	printf("%s",p);
}