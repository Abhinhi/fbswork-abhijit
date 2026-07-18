#include<stdio.h>
void mystrconcat(char*,char*);
void main() {
	char str1[40]="hello";
	char str2[]="world";
	mystrconcat(str1,str2);
	printf("%s",str1);
}
void mystrconcat(char* str1,char* str2) {
	int i=0,j=0;
	while(str1[i]!='\0') {
		i++;
	}
	while(str2[j] != '\0') {
		str1[i]=str2[j];
		        i++;
		j++;
	}
	str1[i]='\0';
}