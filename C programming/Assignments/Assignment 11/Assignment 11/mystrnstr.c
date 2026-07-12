#include<stdio.h>
char* mystrnstr(char*,char*,int);
void main()
{
	char str1[]="programming";
	char str2[]="gram";
	char* ptr=mystrnstr(str1,str2,8);
	if(ptr!=NULL)
	printf("%s",ptr);
	else
	printf("not found");
}
char* mystrnstr(char* str1,char* str2,int n)
{
	int i,j;
	if(*str2=='\0')
	return str1;
	for(i=0;str1[i]!='\0'&&i<n;i++)
	{
		j=0;
		while(str2[j] != '\0' &&
               str1[i + j] != '\0' &&
               (i + j) < n &&
               str1[i + j] == str2[j])
               {
               	j++;
			   }
			   if(str2[j]=='\0')
			   return &str1[i];
	}
	return NULL;
}