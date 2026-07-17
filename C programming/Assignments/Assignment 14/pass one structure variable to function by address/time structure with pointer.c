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
	time* ptr=(time*)malloc(size*sizeof(time));
	
	printf("Enter time:");
	storetime(ptr,size);
	
	printf("time is:");
	displaytime(ptr,size);
		
}
void storetime(time* ptr,int size)
{
	for(int i=0;i<size;i++)
	{
	int totaltimes;
	printf("enter total time in sec:");
	scanf("%d",&totaltimes);
	
//	(tarr+i)->hour=totaltimes/3600;
	ptr[i].hour=totaltimes/3600;
	ptr[i].min=(totaltimes%3600)/60;
	ptr[i].sec=(totaltimes%3600)%60;
    }
}
void displaytime(time* ptr,int size)
{
	for(int i=0;i<size;i++)
	{
	printf("hour:%d min:%d sec:%d\n",ptr[i].hour,ptr[i].min,ptr[i].sec);
    }
}