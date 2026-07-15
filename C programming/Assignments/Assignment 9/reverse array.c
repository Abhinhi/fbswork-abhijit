#include<stdio.h>
void storeArray(int* arr,int size);
void displayArray(int* arr,int size);
void reverseArray(int* arr,int size);
void main() {
	int size=10;
	int arr[size];
	printf("enter elements of arr:\n");
	storeArray(arr,size);

	printf("elements of arr:");
	displayArray(arr,size);


	printf("\nReversed elements:");
	reverseArray(arr,size);
}
void storeArray(int* arr,int size) {
	for(int i=0; i<size; i++) {
		scanf("%d",&arr[i]);
	}
}
void displayArray(int* arr,int size) {
	for(int i=0; i<size; i++)
		printf("%d ",arr[i]);
}
void reverseArray(int* arr,int size) {
	for(int i=0; i<size/2; i++) {
		int temp=arr[i];
		arr[i]=arr[size-1-i];
		arr[size-1-i]=temp;
	}
	displayArray(arr,size);
}