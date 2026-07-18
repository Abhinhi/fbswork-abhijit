#include<stdio.h>
void mystrrev(char*);
void main()
{
	char str[]="hello";
	mystrrev(str);
	printf("%s",str);
}
void mystrrev(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	int j=i-1;
	i=0;
	while(i<j){
	char temp=str[i];
	str[i]=str[j];
	str[j]=temp;
	i++;
	j--;
}
}