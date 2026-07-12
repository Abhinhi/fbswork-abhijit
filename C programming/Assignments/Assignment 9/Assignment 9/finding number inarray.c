#include<stdio.h>
void addArray(int* arr,int size);
void findNum(int* arr,int size,int no);
void main(){
	int size=10;
	int arr[size];
	int no;
	printf("enter 10 numbers:\n");
	addArray(arr,size);
	printf("enter no:");
	scanf("%d",&no);
	findNum(arr,size,no);
}
void addArray(int* arr,int size){

for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
}

void findNum(int* arr,int size,int no)	
{
	int found=0;
	for(int j=0;j<size;j++)
	{
		if(arr[j]==no)
		{
			printf("%d found at the index%d\n",no,j);
			found=1;
			break;
		}
		
}
	if(found==0)
	printf("%d not found in array",no);
}
