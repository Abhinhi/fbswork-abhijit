#include<stdio.h>
int mystrcasecmp(char*,char*);
void main()
{
	char s1[]="hello";
	char s2[]="heLLo";
	if(mystrcasecmp(s1,s2)==0)
	printf("same string(case insensitive)");
	else
	printf("strings are not equal");
}
int mystrcasecmp(char* s1,char*s2)
{
	while(*s1!='\0' && *s2!='\0')
	{
		char ch1=*s1;
		char ch2=*s2;
		if(ch1>='a' && ch1<='z')
		{
			ch1=(*s1)-32;
		}
		if(ch2>='a' && ch2<='z')
		{
			ch2=(*s2)-32;
		}
		if(ch1!=ch2)
		return ch1-ch2;
		s1++;
		s2++;
	}
	return *s1-*s2;
}