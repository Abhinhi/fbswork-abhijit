#include<stdio.h>
int vowel_consonant();
int main(){
	int x=vowel_consonant();
	if(x==1){
		printf("ch is vowel");
	}
	else{
		printf("ch is consonant");
	}
}
int vowel_consonant(){
	char ch;
	printf("enter ch:");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
		return 1;
	}
	else{
		return 0;
	}
}
