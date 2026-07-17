#include<stdio.h>
#include<stdlib.h>
typedef struct time
{
	int hour;
	int min;
	int sec;
}time;
time storetime();
void displaytime(time);
void main()
{
	struct time t1,t2;
	
	printf("Enter time:");
	t1=storetime();
	
	printf("Enter time:");
	t2=storetime();
	
	printf("t1 is:");
	displaytime(t1);
	
	
	printf("t2 is:");
	displaytime(t2);
		
}
time storetime()
{
	time temp;
	int totaltimes;
	printf("enter total time in sec:");
	scanf("%d",&totaltimes);
	
	temp.hour=totaltimes/3600;
	temp.min=(totaltimes%3600)/60;
	temp.sec=(totaltimes%3600)%60;
	return temp;
}
void displaytime(time t1)
{
	printf("hour:%d min:%d sec:%d\n",t1.hour,t1.min,t1.sec);
}