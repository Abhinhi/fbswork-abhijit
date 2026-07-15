#include<stdio.h>
void main() {
	int arr[10];
	printf("enter elements of arr:\n");
	for(int i=0; i<10; i++) {
		scanf("%d",&arr[i]);
	}
	printf("elements of arr:");
	for(int i=0; i<10; i++) {
		printf("%d ",arr[i]);
	}
	for(int i=0; i<10/2; i++) {
		int temp=arr[i];
		arr[i]=arr[10-1-i];
		arr[10-1-i]=temp;
	}
	printf("\nReversed elements:");
	for(int i=0; i<10; i++) {
		printf("%d ",arr[i]);
	}
}