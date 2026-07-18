#include<stdio.h>
#include<string.h>
void main(){
	char str[50];
	int i;
	printf("enter string ");
	fgets(str,sizeof(str),stdin);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a')
		{
			str[i]='$';
		}
	}
	printf("%s",str);
}