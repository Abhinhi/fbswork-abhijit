#include<stdio.h>
void storeArray(int* arr,int size);
void alternateEle(int* arr,int size);
void main() {
	int s=10;
	int arr[s];
	printf("enter numbers:\n");
	storeArray(arr,s);
	printf("alternate numbers:");
	alternateEle(arr,s);
}
void storeArray(int* arr,int size)
{
   for(int i=0;i<size;i++)
   {
   	scanf("%d",&arr[i]);
   }
}

void alternateEle(int* arr,int size)
{
	for(int i=0; i<size; i+=2)
		printf("%d ",arr[i]);
}