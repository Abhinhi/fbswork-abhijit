#include<stdio.h>
int main()
{
	char str[50];
	int i;
	printf("enter a string:");
	fgets(str,sizeof(str),stdin);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		str[i]='$';
	}
	printf("%s",str);
}