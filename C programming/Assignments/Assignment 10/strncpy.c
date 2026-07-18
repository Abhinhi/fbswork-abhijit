#include<stdio.h>
#include<string.h>
void main(){
	char str[]="programming";
	char dest[20];
	strncpy(dest,str,4);
	printf("%s",dest);
}