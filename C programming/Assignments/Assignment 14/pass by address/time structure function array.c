#include<stdio.h>
#include<stdlib.h>
typedef struct time
{
	int hour;
	int min;
	int sec;
}time;
void storetime(time*,int);
void displaytime(time*,int);
void main()
{
	int size;
	printf("Enter size:");
	scanf("%d",&size);
	struct time tarr[size];
	
	printf("Enter time:");
	storetime(tarr,size);
	
	printf("time is:");
	displaytime(tarr,size);
		
}
void storetime(time* tarr,int size)
{
	for(int i=0;i<size;i++)
	{
	int totaltimes;
	printf("enter total time in sec:");
	scanf("%d",&totaltimes);
	
	(tarr+i)->hour=totaltimes/3600;
	(tarr+i)->min=(totaltimes%3600)/60;
	(tarr+i)->sec=(totaltimes%3600)%60;
    }
}
void displaytime(time* tarr,int size)
{
	for(int i=0;i<size;i++)
	{
	printf("hour:%d min:%d sec:%d\n",(tarr+i)->hour,(tarr+i)->min,(tarr+i)->sec);
    }
}