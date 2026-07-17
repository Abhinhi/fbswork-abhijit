#include<stdio.h>
typedef struct complex
{
	float real;
	float imaginary;
}complex;
complex storenumber();
void displaynumber(complex);
void main()
{
	complex c1,c2;
	printf("enter c1 deayils:");
	c1=storenumber();
	
	printf("enter c2 number:");
	c2=storenumber();
	
	printf("c1 details are:");
	displaynumber(c1);
	
	printf("\nc2 details are");
	displaynumber(c2);
	
}
complex storenumber()
{
	complex temp;
	scanf("%f %f",&temp.real,&temp.imaginary);
	return temp;
}
void displaynumber(complex c)
{
	printf("%.2f %.2f",c.real,c.imaginary);
}
