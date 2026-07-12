#include<stdio.h>
void main(){
	int arr[10];
	int no;
	int found=0;
	printf("enter 10 numbers:\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter no:");
	scanf("%d",&no);
	
	for(int j=0;j<10;j++)
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