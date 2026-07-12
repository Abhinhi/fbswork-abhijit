#include<stdio.h>
void main()
{
	int arr[5];
	int brr[7];
	int crr[10];
	printf("enter element in array1");
	storeArray(&arr[0],5);
	
	printf("enter element in array2");
	storeArray(&brr[0,7]);
	
	printf("enter element in array3");
	storeArray(&crr[0],10);
	
	printf("elements in arra1:");
	displayArray(&arr[0],5);
	
	printf("elements in arra2:");
	displayArray(&arr[0],5);
	
	printf("elements in arra3:");
	displayArray(&arr[0],5);
}
void storeArray(int* arr,int size)
{
   for(int i=0;i<size;i++)
   {
   	scanf("%d",&arr[i]);
   }
}
displayArray(int* arr,int size)
{
	for(int i=0;i<size;i++)
	printf("%d",arr[i]);
}