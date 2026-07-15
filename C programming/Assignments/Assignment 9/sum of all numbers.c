#include<stdio.h>
void storeArray(int* arr,int size);
int sumofArray(int* arr,int size);
int main(){
	int s=5;
	int arr[s];
	printf("enter 5 numbers\n");
	storeArray(arr,s);
	
    int sum=sumofArray(arr,s);
    printf("sum of Array:%d",sum);
}

void storeArray(int* arr,int size)
{
	for(int i=0;i<size;i++)
	scanf("%d",&arr[i]);
}

int sumofArray(int* arr,int size)
{
	int sum=0;
	for(int i=0;i<5;i++)
	{
		sum+=arr[i];
	}
	return sum;
}
