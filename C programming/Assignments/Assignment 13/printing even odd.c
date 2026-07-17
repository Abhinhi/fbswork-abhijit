#include<stdio.h>
#include<stdlib.h>
void main() {
    int size;
    printf("Enter size:");
    scanf("%d",&size);
	int* arr=(int*)malloc(size*sizeof(int));
	
	printf("enter element\n");
	for(int i=0; i<size; i++)
		scanf("%d",&arr[i]);
		
	printf("odd numbers:");
	for(int i=0; i<size; i++)
		if(arr[i]%2!=0)
			printf("%d ",arr[i]);
			
	printf("\ even numbers:");
	for(int i=0; i<size; i++)
		if(arr[i]%2==0)
			printf("%d ",arr[i]);

}