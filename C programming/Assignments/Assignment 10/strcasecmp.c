#include<stdio.h>
#include<strings.h>
void main()
{
	char str1[]="HELLO";
	char str2[]="hello";
	int result=strcasecmp(str1,str2);
    printf("%d\n",result);
}