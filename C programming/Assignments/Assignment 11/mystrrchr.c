#include<stdio.h>
char* mystrrchr(char*,char);
void main(){
	char str[]="programming";
	char* ptr=mystrrchr(str,'m');
	if(ptr!=NULL)
	printf("%s",ptr);
	else
	printf("character not found");
}
char* mystrrchr(char* str,char ch)
{
	char* last=NULL;
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		last=&str[i];
		i++;
	}
	return last;
}