#include<stdio.h>
void vowel_consonant(char);
void main() {
	char ch;
	printf("enter ch:");
	scanf("%c",&ch);
	vowel_consonant(ch);
}
void vowel_consonant(char ch) {

	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
		printf("vowel");
	} else {
		printf("consonant");
	}
}