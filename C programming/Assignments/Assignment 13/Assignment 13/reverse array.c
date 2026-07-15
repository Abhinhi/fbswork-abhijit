#include<stdio.h>
#include<stdlib.h>
void main() {
	int size;
	printf("enter size:");
	scanf("%d",&size);
	int* arr=(int*)malloc(size*sizeof(int));
	printf("enter elements of arr:\n");
	for(int i=0; i<size; i++) {
		scanf("%d",&arr[i]);
	}
	printf("elements of arr:");
	for(int i=0; i<size; i++) {
		printf("%d ",arr[i]);
	}
	for(int i=0; i<size/2; i++) {
		int temp=arr[i];
		arr[i]=arr[10-1-i];
		arr[10-1-i]=temp;
	}
	printf("\nReversed elements:");
	for(int i=0; i<size; i++) {
		printf("%d ",arr[i]);
	}
}