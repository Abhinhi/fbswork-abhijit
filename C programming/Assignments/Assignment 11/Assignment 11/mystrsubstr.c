#include<stdio.h>
char* mystrsubstr(char*,char*);
void main(){
	char str1[]="helloworld";
	char str2[]="low";
	char* ptr=mystrsubstr(str1,str2);
	if(ptr!=NULL)
	{
		printf("%s",ptr);
	}
	else
	{
		printf("substring not found");
	}
}
char* mystrsubstr(char* str1,char* str2)
{
 int i,j;

    for(i=0;str1[i]!='\0';i++)
    {
        for(j=0;str2[j]!='\0';j++)
        {
            if(str1[i+j]!=str2[j])
                break;
        }

        if(str2[j]=='\0')
            return &str1[i];
    }

    return NULL;

}