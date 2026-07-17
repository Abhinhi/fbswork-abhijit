#include<stdio.h>
#include<string.h>
typedef struct student
{
	int roll_no;
	char name[50];
	int marks;
} student;
void storestudent(student*,int);
void displaystudent(student*,int);
void main()
{
	int size;
	printf("Enter size:");
	scanf("%d",&size);
	student sarr[size];
	printf("enter student deatils:\n");
	storestudent(sarr,size);
	
	printf("students details are\n");
	displaystudent(sarr,size);
}
void storestudent(student* sarr,int size)
{
	for(int i=0;i<size;i++)
	{
	printf("enter roll no:");
	scanf("%d",&(sarr+i)->roll_no);
	printf("enter name:\n");
	fflush(stdin);
	gets((sarr+i)->name);
	printf("Enter marks:\n");
	scanf("%d",&(sarr+i)->marks);
    }
}
void displaystudent(student* sarr,int size)
{
	for(int i=0;i<size;i++)
	{
	printf("roll no:%d\n",(sarr+i)->roll_no);
	printf("name:%s\n",(sarr+i)->name);
	printf("marks:%d\n",(sarr+i)->marks);
    }
}