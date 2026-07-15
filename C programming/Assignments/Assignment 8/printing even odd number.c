#include<stdio.h>
void main() {

	int arr[10];
	printf("enter numbers\n");
	for(int i=0; i<10; i++)
		scanf("%d",&arr[i]);
	printf("odd numbers:");
	for(int i=0; i<10; i++)
		if(arr[i]%2!=0)
			printf("%d ",arr[i]);
	printf("\ even numbers:");
	for(int i=0; i<10; i++)
		if(arr[i]%2==0)
			printf("%d ",arr[i]);

}