#include<stdio.h>
void mystrncat(char*,char*,int);

void main(){
	char str1[20]="hello";
	char str2[]="world";
	int n;
	printf("enter number:");
	scanf("%d",&n);
	mystrncat(str1,str2,n);
	printf("%s",str1);
}
void mystrncat(char* str1,char* str2,int n)
{
	int i=0,j=0;
	while(str1[i]!='\0')
	{
		i++;
	}
	while(str2[j]!='\0' && j<n)
	{
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]='\0';
}