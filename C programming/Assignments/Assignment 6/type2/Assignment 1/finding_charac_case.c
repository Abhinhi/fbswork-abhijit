#include<stdio.h>
int ch_case();
void main() {
	char ch=ch_case();
	if(ch==1)
		printf("upper case");
	else if(ch==0)
		printf("lower case");
	else {
		printf("not character");
	}
}
int ch_case() {
	char ch;
	printf("enter ch:");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z') {
		return 1;
	} else if(ch>='a'&&ch<='z') {
		return 0;
	} else
		return -1;

}
