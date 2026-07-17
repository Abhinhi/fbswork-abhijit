#include<stdio.h>
#include<stdlib.h>
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
	student* ptr=(student*)malloc(size*sizeof(student));
	printf("enter student deatils:\n");
	storestudent(ptr,size);
	
	printf("students details are\n");
	displaystudent(ptr,size);
}
void storestudent(student* ptr,int size)
{
	for(int i=0;i<size;i++)
	{
	printf("enter roll no:");
//	scanf("%d",&(sarr+i)->roll_no);
	scanf("%d",&ptr[i].roll_no);
	printf("enter name:\n");
	fflush(stdin);
	gets(ptr[i].name);
	printf("Enter marks:\n");
	scanf("%d",&ptr[i].marks);
    }
}
void displaystudent(student* ptr,int size)
{
	for(int i=0;i<size;i++)
	{
//	printf("roll no:%d\n",(sarr+i)->roll_no);
	printf("roll no:%d\n",ptr[i].roll_no);
	printf("name:%s\n",ptr[i].name);
	printf("marks:%d\n",ptr[i].marks);
    }
}