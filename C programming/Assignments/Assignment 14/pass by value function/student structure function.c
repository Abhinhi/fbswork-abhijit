#include<stdio.h>
#include<string.h>
typedef struct student
{
	int roll_no;
	char name[50];
	int marks;
} student;
student storestudent();
void displaystudent(student);
void main()
{
	student s1,s2;
	printf("enter s1 student deatils:\n");
	s1=storestudent();
	
	printf("enter s2 student deatils:\n");
	s2=storestudent();
	
	printf("s1 students details are\n");
	displaystudent(s1);
	
	printf("s2 students details are\n");
	displaystudent(s2);
}
student storestudent()
{
	student temp;
	printf("enter roll no:");
	scanf("%d",&temp.roll_no);
	printf("enter name:\n");
	fflush(stdin);
	gets(temp.name);
	printf("Enter marks:\n");
	scanf("%d",&temp.marks);
	return temp;
}
void displaystudent(student s)
{
	printf("roll no:%d\n",s.roll_no);
	printf("name:%s\n",s.name);
	printf("marks:%d\n",s.marks);
}