#include<stdio.h>
int vote_eligibility();
void main(){
	int x=vote_eligibility();
	if(x==1){
		printf("eligible for vote");
	}
	else
	printf("not eligible for vote");
}
int vote_eligibility(){
		int age;
		printf("enter age:");
		scanf("%d",&age);
	if(age>=18){
		return 1;
	}
	else{
		return 0;
	}
}