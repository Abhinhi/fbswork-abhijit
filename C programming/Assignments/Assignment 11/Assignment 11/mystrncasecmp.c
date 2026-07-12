#include<stdio.h>
int mystrncasecmp(char*,char*,int);
void main()
{
	char s1[]="hello";
	char s2[]="heLLo";
	if(mystrncasecmp(s1,s2,5)==0)
	printf("same string(case insensitive)");
	else
	printf("strings are not equal");
}
int mystrncasecmp(char* s1,char*s2,int n)
{
	while(n>0 && *s1!='\0' && *s2!='\0')
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
		n--;
	}
	if(n==0)
	return 0;
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
		
	return ch1-ch2;
}