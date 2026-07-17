#include<stdio.h>
#include<stdlib.h>
typedef struct complex
{
	float real;
	float imaginary;
}complex;
void storenumber(complex*,int);
void displaynumber(complex*,int);
void main()
{
	int size;
	printf("Enter size:");
	scanf("%d",&size);
	complex* ptr=(complex*)malloc(size*sizeof(complex));
	printf("enter c1 deayils:");
	storenumber(ptr,size);
	
	printf("c1 details are:");
	displaynumber(ptr,size);
	
	
}
void storenumber(complex* ptr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter real & complex number:");
	    scanf("%f %f",&ptr[i].real,&ptr[i].imaginary);
    }
}
void displaynumber(complex* ptr,int size)
{
	for(int i=0;i<size;i++)
	{
	printf("real:%.2f imaginary:%.2f",ptr[i].real,ptr[i].imaginary);
    }
}
