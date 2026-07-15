#include<stdio.h>
#include<string.h>
void main(){
    char str[50];
    int i,n;
    printf("enter string: ");
    fgets(str,sizeof(str),stdin);
    printf("enter index to remove: ");
    scanf("%d",&n);
    for(i=n;str[i]!='\0';i++){
    	str[i]=str[i+1];
	}
    printf("resulting string %s",str);
}