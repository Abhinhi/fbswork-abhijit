#include<stdio.h>
#include<string.h>
void main(){
	char str[50],temp;
	int len;
	printf("enter a string:");
	fgets(str,sizeof(str),stdin);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='\n')
		str[i]='\0';
	}
	len =strlen(str);
	if(len>1){
		temp=str[0];
		str[0]=str[len-1];
		str[len-1]=temp;
	}
	printf("resulting string:%s",str);
}