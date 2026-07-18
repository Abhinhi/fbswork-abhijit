#include<stdio.h>
void main()
{
	char str1[50],str2[50];
	int len1=0,len2=0;
	printf("enter first string:");
	scanf("%s",&str1);
	
	printf("enter second string:");
	scanf("%s",&str2);
	
	for(int i=0;str1[i]!='\0';i++)
	     len1++;
	     
	for(int i=0;str2[i]!='\0';i++)
	     len2++;  
	
	if(len1>len2)
	printf("larger string %s",str1);	
	else if(len2>len1)
	printf("larger string %s",str2);
	else
	printf("both string are same");    
}