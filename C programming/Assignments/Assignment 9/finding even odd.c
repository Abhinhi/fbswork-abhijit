#include<stdio.h>
void storeArray(int* arr,int size);
void evenoddArray(int* arr,int size);
void main() {
	int s=10;
	int arr[s];
	printf("enter numbers\n");
	storeArray(arr,s);

	evenoddArray(arr,s);
}
void storeArray(int* arr,int size) {
	for(int i=0; i<size; i++)
		scanf("%d",&arr[i]);
}
void evenoddArray(int* arr,int size) {
	printf("odd numbers:");
	for(int i=0; i<size; i++)
		if(arr[i]%2!=0)
			printf("%d ",arr[i]);
			
	printf("\nEven numbers:");
	for(int i=0; i<size; i++)
		if(arr[i]%2==0)
			printf("%d ",arr[i]);
}