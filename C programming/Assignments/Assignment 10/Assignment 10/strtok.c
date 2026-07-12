#include<stdio.h>
#include<string.h>
void main(){
	char str[]="apple,banana,mango";
	char* p=strtok(str,",");
	while(p!=NULL){
		printf("%s\n",p);
		p=strtok(NULL,",");
	}
}