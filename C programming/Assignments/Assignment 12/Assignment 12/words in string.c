#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int i,word=0;
	printf("enter string:");
	fgets(str,sizeof(str),stdin);
	for(i=0;str[i]!='\0';i++)
	{
		if((i ==0 && str[i] != ' ' && str[i] !='\n') ||
		(str[i] !=' ' && str[i]!='\n' && str[i-1]==' '))
		{
			word++;
		}
	}
	printf("number of words:%d",word);
}