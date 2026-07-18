#include <stdio.h>
char* my_strtok(char*,const char*);
int main()
{
    char str[] ="apple,banana,orange";

    char* token=my_strtok(str,",");

    while (token)
    {
        printf("%s\n",token);
        token = my_strtok(NULL,",");
    }

    return 0;
}
char *my_strtok(char *str,const char *delim)
{
    static char *next;

    if(str!=NULL)
        next = str;

    if(next==NULL)
        return NULL;

    
    while(*next&&*next==*delim)
        next++;

    if(*next =='\0')
        return NULL;

    char *token=next;

    while (*next && *next!=*delim)
        next++;

    if(*next)
    {
        *next ='\0';
        next++;
    }
    else
    {
        next=NULL;
    }

    return token;
}