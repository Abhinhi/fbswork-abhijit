#include<stdio.h>
char* my_strchr(char*,char );
void main(){
	char str[]="programming";
	char ch;
	printf("Enter character:");
	scanf("%c",&ch);
	char* ptr=my_strchr(str,ch);
	if(ptr!=NULL)
	printf("%s",ptr);
	else
	printf("character not found");
}
char* my_strchr(char* str,char ch)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		return &str[i];
		i++;
	}
	
	if(ch=='\0')
	return &str[i];
	
    return NULL;
}