#include<stdio.h>
int student_marks(int);
void main(){
	int marks;
 	printf("enter marks:");
 	scanf("%d",&marks);
	int x = student_marks(marks);
	if(x==1)
	{
	printf("distinction");	
	}
	else if(x==2)
	{
	printf("first class");
	}
	else if(x==3)
	{
	printf("second class");
	}
	else if(x==4)
	{
	printf("pass class");
	}
	else 
	printf("fail");
}
 int student_marks(int marks){
 	
	if(marks>=75){
		return 1;
	}
	else if(marks>=65){
		return 2;
	}
	else if(marks>=55){
		return 3;
	}
	else if(marks>=40){
		return 4;
	}
	else {
		return 0;
	}
 }