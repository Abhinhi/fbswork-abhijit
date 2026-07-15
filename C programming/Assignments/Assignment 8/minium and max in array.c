#include<stdio.h>
void main(){
	 int arr[10];
	 printf("enter number:");
	 for(int i=0;i<10;i++)
	 {
	 	scanf("%d",&arr[i]);
	 }
	 int min=arr[0];
	 for(int i=1;i<10;i++)
	 {
	 	if(arr[i]<min)
	 	min=arr[i];
	 }
	 printf("min is:%d\n",min);
	 int max=arr[0];
	 for(int i=1;i<10;i++)
	 {
	 	if(arr[i]>max)
	 	max=arr[i];
	 }
	 printf("max is:%d",max);
}