#include<stdio.h>
void student_marks();
void main(){
	student_marks();
}
 void student_marks(){
 	int marks;
 	printf("enter marks:");
 	scanf("%d",&marks);
	if(marks>=75){
		printf("Distinction");
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