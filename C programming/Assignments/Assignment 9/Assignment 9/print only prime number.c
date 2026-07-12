#include<stdio.h>
void storeArray(int* arr,int size);
void primeNumber(int* arr,int size);
void main(){
	int n;
	printf("enter number: ");
	scanf("%d",&n);
	
	int arr[n];
	printf("enter array element:");
	storeArray(arr,n);

	printf("prime numbres:");
	primeNumber(arr,n);
}
void storeArray(int* arr,int size)
{
   for(int i=0;i<size;i++)
   {
   	scanf("%d",&arr[i]);
   }
}
void primeNumber(int* arr,int size)
{
	for(int i=0;i<size;i++)
	{
		int num=arr[i];
		int isprime=1;
		if(num<2)
		{
			isprime=0;
		}
		else
		{
			for(int j=2;j*j<=num;j++)
			{
				if(num%j==0){
				isprime=0;
				break;
			}
			}
			}	
			if(isprime==1)
			printf("%d ",num);
	
	}
}