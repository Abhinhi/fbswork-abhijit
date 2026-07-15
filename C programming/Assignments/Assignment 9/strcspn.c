#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="abcde123";
	char str2[]="123";
	int length=strcspn(str1,str2);
	printf("%d",length);
}