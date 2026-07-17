#include<stdio.h>
typedef struct distance
{
	int feet;
	int inch;
}distance;
void storedistance(distance*,int);
void displaydistance(distance*,int);
void main()
{
	int size;
	printf("Enter size:");
	scanf("%d",&size);
	distance darr[size];
	
	printf("Enter distance :\n");
	storedistance(darr,size);
	
	printf("details:");
	displaydistance(darr,size);
	
	
}
void storedistance(distance* darr,int size)
{
	for(int i=0;i<size;i++)
	{
	int totaldis2;
	printf("Enter distance in inches:");
	scanf("%d",&totaldis2);
	(darr+i)->feet=totaldis2/12;
	(darr+i)->inch=totaldis2%12;
    }
}
void displaydistance(distance* darr,int size)
{
	for(int i=0;i<size;i++){

	printf("d1 feet:%d inch:%d\n",(darr+i)->feet,(darr+i)->inch);
}
}