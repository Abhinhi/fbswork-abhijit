#include<stdio.h>
#include<stdlib.h>
void main(){
	int size;
	printf("enter size:");
	scanf("%d",&size);
	int* arr=(int*)malloc(size*sizeof(int));
	int no;
	int found=0;
	printf("enter elements:\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter no:");
	scanf("%d",&no);
	
	for(int j=0;j<size;j++)
	{
		if(arr[j]==no)
		{
			printf("%d found at the index [%d]\n",no,j);
			found=1;
			break;
		}
		
}
	if(found==0)
	printf("%d not found in array",no);
}