#include<stdio.h>
#include<string.h>
int main(){
	char str[]="programming";
	char* p=strchr(str,'g');
	printf("%s",p);
	return 0;
}