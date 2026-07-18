#include<stdio.h>
int mystrcompare(char*,char*);
void main(){
	char str1[]="apple";
	char str2[]="apple";
	int result=mystrcompare(str1,str2);
	printf("%d",result);
} 
int mystrcompare(char* str1,char* str2)
{
	int i=0;
	while(str1[i]!='\0' && str2[i]!='\0')
	{
		if(str1[i]!=str2[i])
		{
			if(str1[i]>str2[i])
			return 1;
			else 
			return -1;
		}
		i++;
	}
	 if(str1[i]=='\0' && str2[i]=='\0')
	  return 0;
	  
	if(str1[i]=='\0')
	return -1;
	
	else
	return 1;
}