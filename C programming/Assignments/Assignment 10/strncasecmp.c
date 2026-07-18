#include<stdio.h>
#include<strings.h>
void main()
{
	char str1[]="HELLO";
	char str2[]="hello";
	int result=strncasecmp(str1,str2,3);
    printf("%d\n",result);
}