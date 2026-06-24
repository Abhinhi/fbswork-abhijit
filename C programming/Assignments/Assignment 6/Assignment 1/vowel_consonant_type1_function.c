#include<stdio.h>
void vowel_consonant();
void main(){
	vowel_consonant();
}
void vowel_consonant(){
	char ch;
	printf("enter ch:");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
		printf("vowel");
	}
	else{
		printf("consonant");
	}
}
