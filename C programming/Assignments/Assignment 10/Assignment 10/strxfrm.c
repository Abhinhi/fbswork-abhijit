#include<stdio.h>
#include<string.h>

void main()
{
char src1[]="apple";
char src2[]="banana";
char dest1[20],dest2[20];

strxfrm(dest1,src1,20);
strxfrm(dest2,src2,20);

printf("%d\n",strcmp(dest1,dest2));

}