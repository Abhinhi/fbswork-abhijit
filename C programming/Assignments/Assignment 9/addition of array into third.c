#include<stdio.h>
void storearray(int* arr,int size);
void addArrays(int* arr,int s1,int* brr,int s2,int* crr);
void main()
{
	int s1=5,s2=7;
	int arr[s1];
	int brr[s2];
	int s3=s1>s2?s1:s2;
	int crr[s3];
	
	printf("Enter elements in array 1:\n");
	storearray(arr,5);
	
	printf("Enter elements in array 2:\n");
	storearray(brr,7);
	
	addArrays(arr,s1,brr,s2,crr);
	
}
void storearray(int*arr,int size)
{
	for(int i=0;i<size;i++)
	scanf("%d",&arr[i]);
}
void addArrays(int* arr,int s1,int* brr,int s2,int* crr)
{
	int s3=s1>s2?s1:s2;
	int ss=s1<s2?s1:s2;
	for(int i=0;i<ss;i++)
	{
		crr[i]=arr[i]+brr[i];
	}
	
	int* x=s1>s2?arr:brr;
	for(int i=ss;i<s3;i++)
	{
		crr[i]=x[i];
	}
	printf("elements of array 3:");
	for(int i=0;i<s3;i++)
	   printf("%d ",crr[i]);
}