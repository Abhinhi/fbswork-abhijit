#include<stdio.h>
#include<string.h>
void main()
{
    char str[100],ch;
    char *ptr;

    printf("Enter a string: ");
    scanf("%99s", str);

    printf("Enter a character to search: ");
    scanf(" %c",&ch);

    ptr=strchr(str,ch);

    if (ptr != NULL)
        printf("Character found at index %d\n", ptr - str);
    else
        printf("Character not found");

}