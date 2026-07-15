#include<stdio.h>
#include<stdlib.h>
void main(){
	int size;
	printf("enter size:");
	scanf("%d",&size);
	 int* arr=(int*)malloc(size*sizeof(int));
	 printf("enter number element:");
	 for(int i=0;i<size;i++)
	 {
	 	scanf("%d",&arr[i]);
	 }
	 int min=arr[0];
	 for(int i=1;i<size;i++)
	 {
	 	if(arr[i]<min)
	 	min=arr[i];
	 }
	 printf("min is:%d\n",min);
	 int max=arr[0];
	 for(int i=1;i<size;i++)
	 {
	 	if(arr[i]>max)
	 	max=arr[i];
	 }
	 printf("max is:%d",max);
}