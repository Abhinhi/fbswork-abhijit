#include<stdio.h>
int main(){
	char str[100],result[100];
	int i,j=0;
	printf("enter a string:");
	fgets(str,sizeof(str),stdin);
	for(i=0;str[i]!='\0';i++)
	{
		if(i%2==0){
		result[j]=str[i];
		j++;
	}
	}
	result[j]='\0';
	printf("%s",result);
}