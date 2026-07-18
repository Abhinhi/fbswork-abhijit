#include<stdio.h>
void main()
{
	char str[50];
	printf("enter string");
	scanf("%s",&str);
	 int length=0,flag=1;
	for(int i=0;str[i]!='\0';i++)
	{
		length++;
	}
	
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i] != str[length-1-i])
		flag=0;
		break;
	}
	
	if(flag)
	{
		printf("string is palindrome");
	}
	else
	printf("string is not palindrome");
	
}