#include<stdio.h>
#include<string.h>
int main(){
	char str[]="i love programming";
	char* p=strstr(str,"program");
	printf("%s",p);
	return 0;
}