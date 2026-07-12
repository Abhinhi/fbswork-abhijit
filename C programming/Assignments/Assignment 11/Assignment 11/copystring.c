#include<stdio.h>
void mystrcopy(char*,char*);
void main(){
	char str1[]="hello";
	char str2[6];
	
	mystrcopy(str2,str1);
	printf("copied string:%s",str2);
}
void mystrcopy(char* s2,char* s1){
	int i=0;
	while(s1[i] !='\0')
	{
		s2[i]=s1[i];
		i++;
	}
	s2[i]=s1[i];
	
}