#include<stdio.h>
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
	complex carr[size];
	printf("enter c1 deayils:");
	storenumber(carr,size);
	
	printf("c1 details are:");
	displaynumber(carr,size);
	
	
}
void storenumber(complex* carr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter real & complex number:");
	    scanf("%f %f",&(carr+i)->real,&(carr+i)->imaginary);
    }
}
void displaynumber(complex* carr,int size)
{
	for(int i=0;i<size;i++)
	{
	printf("real:%.2f imaginary:%.2f",(carr+i)->real,(carr+i)->imaginary);
    }
}
