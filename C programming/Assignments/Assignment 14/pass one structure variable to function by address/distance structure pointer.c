#include<stdio.h>
#include<stdlib.h>
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
	distance* ptr=(distance*)malloc(size*sizeof(distance));
	
	printf("Enter distance :\n");
	storedistance(ptr,size);
	
	printf("details:");
	displaydistance(ptr,size);
	
	
}
void storedistance(distance* ptr,int size)
{
	for(int i=0;i<size;i++)
	{
	int totaldis2;
	printf("Enter distance in inches:");
	scanf("%d",&totaldis2);
	//(darr+i)->feet=totaldis2/12;
	ptr[i].feet=totaldis2/12;
	ptr[i].inch=totaldis2%12;
    }
}
void displaydistance(distance* ptr,int size)
{
	for(int i=0;i<size;i++){

	printf("d1 feet:%d inch:%d\n",ptr[i].feet,ptr[i].inch);
}
}