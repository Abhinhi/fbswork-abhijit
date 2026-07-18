#include<stdio.h>
#include<stdio.h>
void main(){
char s[]="abcde123";
char accept[]="321";

char *p = strpbrk(s,accept);

if(p)
printf("%c\n",*p);
else
printf("NULL\n");
}