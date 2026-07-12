#include<stdio.h>
void mystrncpy(char*,char*,int);
void main()
{
	char source[]="helloworld";
	char des[20];
	int n;
	printf("enter number:");
	scanf("%d",&n);
	mystrncpy(des,source,n);
	printf("%s",des);
}
void mystrncpy(char* des,char* source,int n)
{
	int i=0;
	while(source[i]!='\0' && i<n)
	{
		des[i]=source[i];
		i++;
	}
	des[i]='\0';
}