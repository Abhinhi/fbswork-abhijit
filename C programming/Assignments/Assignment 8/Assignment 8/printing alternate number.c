#include<stdio.h>
void main() {
	int arr[10];
	printf("enter numbers:\n");
	for(int i=0; i<10; i++)
		scanf("%d",&arr[i]);
	printf("alternate numbers:");
	for(int i=0; i<10; i+=2)
		printf("%d ",arr[i]);
}