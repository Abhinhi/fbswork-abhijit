#include<stdio.h>
int main(){
	int arr[5];
	printf("enter 5 numbers\n");
	for(int i=0;i<5;i++)
	scanf("%d",&arr[i]);
	int sum=0;
	for(int i=0;i<5;i++)
	{
		sum+=arr[i];
	}
	printf("sum of all numbers:%d",sum);
	return 0;
}