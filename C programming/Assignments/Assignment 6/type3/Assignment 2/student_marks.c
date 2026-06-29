#include<stdio.h>
void student_marks(int);
void main(){
	int marks;
 	printf("enter marks:");
 	scanf("%d",&marks);
	student_marks(marks);
}
 void student_marks(int marks){
 	
	if(marks>=75){
		printf("distinction");
	}
	else if(marks>=65){
		printf("first class");
	}
	else if(marks>=55){
		printf("second class");
	}
	else if(marks>=40){
		printf("pass class");
	}
	else {
		printf("fail");
	}
 }