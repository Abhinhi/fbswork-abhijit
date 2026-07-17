#include<stdio.h>
#include<stdlib.h>
void main(){
	int size1,size2;
	printf("enter size1 and size2");
	scanf("%d %d",&size1,&size2);
	int* arr=(int*)malloc(size1*sizeof(int));
	int* brr=(int*)malloc(size2*sizeof(int));
	int* merged=(int*)malloc((size1+size2)*sizeof(int));
	printf("enter element of arr:\n");
	for(int i=0;i<5;i++)
	scanf("%d",&arr[i]);
	printf("enter element of brr:\n");
	for(int i=0;i<5;i++)
	scanf("%d",&brr[i]);
	
	for(int i=0;i<5;i++)
	merged[i]=arr[i];
	for(int i=0;i<5;i++)
	merged[i+5]=brr[i];
	printf("merged element:\n");
	for(int i=0;i<10;i++)
	printf("%d ",merged[i]);
}