#include<stdio.h>
#include<stdlib.h>
int main(){
	int size;
	printf("enter size:");
	scanf("%d",&size);
	int* arr=(int*)malloc(size*sizeof(int));
	printf("enter elements\n");
	for(int i=0;i<size;i++)
	scanf("%d",&arr[i]);
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum+=arr[i];
	}
	printf("sum of all numbers:%d",sum);
	return 0;
}