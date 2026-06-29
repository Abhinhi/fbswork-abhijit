#include<stdio.h>
int vowel_consonant(char);
void main(){
	char ch;
	printf("enter ch:");
	scanf("%c",&ch);
	int x=vowel_consonant(ch);
	if(x==1)
	printf("vowel");
	else
	printf("consonant");
}
int vowel_consonant(char c){
	
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
		return 1;
	}
	else{
		return 0;
	}
}
