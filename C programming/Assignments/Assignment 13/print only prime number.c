#include<stdio.h>
#include<stdlib.h>
void main(){
	int size;
	printf("enter size:");
	scanf("%d",&size);
	int* arr=(int*)malloc(size*sizeof(int));
	printf("enter numbers:");
	for(int i=0;i<size;i++)
	scanf("%d",&arr[i]);
	printf("prime numbres:");
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