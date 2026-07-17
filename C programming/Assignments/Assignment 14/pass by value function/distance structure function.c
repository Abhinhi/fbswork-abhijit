#include<stdio.h>
typedef struct distance
{
	int feet;
	int inch;
}distance;
distance storedistance();
void displaydistance(distance);
void main()
{
	distance d1,d2;
	
	printf("Enter d1 :\n");
	d1=storedistance();
	
	printf("Enter d2:\n");
	d2=storedistance();
	
	printf("d1 details:");
	displaydistance(d1);
	printf("d2 details:");
	displaydistance(d2);
	
}
distance storedistance()
{
	distance temp;
	int totaldis2;
	printf("Enter distance in inches:");
	scanf("%d",&totaldis2);
	temp.feet=totaldis2/12;
	temp.inch=totaldis2%12;
	return temp;
}
void displaydistance(distance d)
{
	printf("d1 feet:%d inch:%d\n",d.feet,d.inch);
}