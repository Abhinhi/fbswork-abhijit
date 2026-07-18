#include<stdio.h>
int main(){
	char str[40];
	int i,count=0;
	printf("enter a string:");
	fgets(str,sizeof(str),stdin);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		count++;
		
	}
	printf("no of vowels are: %d",count);
}