#include<stdio.h>
#include<string.h>
int main(){
	char str1[20];
	char str2[20];
	printf("enter str1 &str2:");
	scanf("%s %s",str1,str2);
	int result=strcmp(str1,str2);
	
	if(result==0)
	printf("equal");
	else if(result<0)
	printf("str1 comes before str2");
	else
	printf("str1 comes after str2");
	return 0;
}