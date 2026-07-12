#include<stdio.h>
int my_strncmp(const char*,const char*,int);
void main(){
	char str1[]="hello";
	char str2[]="helium";
	printf("%d",my_strncmp(str1,str2,3));
}
int my_strncmp(const char *s1,const char *s2,int n)
{
unsigned int i;

i=0;
while(i<n&&s1[i]!='\0'&&s2[i]!='\0')
{
if(s1[i]!=s2[i])
return((char)s1[i]-(char)s2[i]);
i++;
}
if(i==n)
return(0);
return((char)s1[i]-(char)s2[i]);
}