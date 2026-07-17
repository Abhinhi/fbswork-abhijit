#include<stdio.h>
#include<stdlib.h>
typedef struct product
{
	int id;
	char name[20];
	int quantity;
	int price;	
}product;
void storeproduct(product*,int);
void displayproduct(product*,int);
void main(){
	int size;
	printf("Enter size:");
	scanf("%d",&size);
	product* ptr=(product*)malloc(size*sizeof(product));
	
	printf("Enter product details\n");
	storeproduct(ptr,size);
	
	printf("product details\n");
	displayproduct(ptr,size);
	
}
void storeproduct(product* ptr,int size)
{
	for(int i=0;i<size;i++)
	{
	printf("enter id:");
//	scanf("%d",&(parr+i)->id);
    scanf("%d",&ptr[i].id);
	printf("enter name:");
	fflush(stdin);
	gets(ptr[i].name);
	printf("enter quantity:");
	scanf("%d",&ptr[i].quantity);
	printf("enter price:");
	scanf("%d",&ptr[i].price);
    }
}

void displayproduct(product* ptr,int size)
{
	for(int i=0;i<size;i++){
	printf("p1: id:%d name:%s quantity:%d price:%d\n",ptr[i].id,ptr[i].name,ptr[i].quantity,ptr[i].price);
   }
}