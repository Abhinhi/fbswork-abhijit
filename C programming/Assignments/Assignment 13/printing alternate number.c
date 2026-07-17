#include<stdio.h>
#include<stdlib.h>
void main() {
	int size;
	printf("enter size:");
	scanf("%d",&size);
	int* arr=(int*)malloc(size*sizeof(int));
	printf("enter numbers:\n");
	for(int i=0; i<size; i++)
		scanf("%d",&arr[i]);
	printf("alternate numbers:");
	for(int i=0; i<size; i+=2)
		printf("%d ",arr[i]);
		
		free(arr);
}