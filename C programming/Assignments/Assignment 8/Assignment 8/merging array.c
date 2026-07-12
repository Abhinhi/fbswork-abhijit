#include<stdio.h>
void main(){
	int arr[5];
	int brr[5];
	int merged[10];
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