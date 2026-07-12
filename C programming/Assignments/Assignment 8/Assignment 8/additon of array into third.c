#include<stdio.h>
void main()
{
	int s1=5,s2=7;
	int* arr[s1];
	int* brr[s2];
	int s3=s1>s2?s1:s2;
	int* crr[s3];
	int ss=s1<s2?s1:s2;
	
	printf("Enter elements in array 1:\n");
	for(int i=0;i<s1;i++)
	scanf("%d",&arr[i]);
	
	printf("Enter elements in array 2:\n");
	for(int i=0;i<s2;i++)
	scanf("%d",&brr[i]);
	
	for(int i=0;i<ss;i++)
	{
		crr[i]=arr[i]+brr[i];
	}
	
	for(int i=ss;i<s3;i++)
	{
		crr[i]=s1>s2?arr[i]:brr[i];
	}
	printf("elements of array 3:");
	for(int i=0;i<s3;i++)
	   printf("%d ",crr[i]);
}