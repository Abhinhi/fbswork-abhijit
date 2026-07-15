#include<stdio.h>
void storeArray(int* arr,int size);
void mergeArray(int* arr,int s1,int* brr,int s2,int* merged,int s3);
void main(){
	int s1=5,s2=5;
	int s3=s1+s2;
	int arr[s1];
	int brr[5];
	int merged[s3];
	printf("enter element of arr:\n");
	storeArray(arr,s1);
	
	printf("enter element of brr:\n");
	storeArray(brr,s2);
	
	mergeArray(arr,s1,brr,s2,merged,s3);
}
void storeArray(int* arr,int size)
{
   for(int i=0;i<size;i++)
   {
   	scanf("%d",&arr[i]);
   }
}

void mergeArray(int* arr,int s1,int* brr,int s2,int* merged,int s3)
{
	for(int i=0;i<s1;i++)
	merged[i]=arr[i];
	
	for(int i=0;i<s2;i++)
	merged[i+s1]=brr[i];
	
	printf("merged element:\n");
	for(int i=0;i<s3;i++)
	printf("%d ",merged[i]);
}