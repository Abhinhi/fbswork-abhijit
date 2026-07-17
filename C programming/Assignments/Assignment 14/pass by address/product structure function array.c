#include<stdio.h>
#include<string.h>
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
	product parr[size];
	
	printf("Enter product details\n");
	storeproduct(parr,size);
	
	printf("product details\n");
	displayproduct(parr,size);
	
}
void storeproduct(product* parr,int size)
{
	for(int i=0;i<size;i++)
	{
	printf("enter id:");
	scanf("%d",&(parr+i)->id);
	printf("enter name:");
	fflush(stdin);
	gets((parr+i)->name);
	printf("enter quantity:");
	scanf("%d",&(parr+i)->quantity);
	printf("enter price:");
	scanf("%d",&(parr+i)->price);
    }
}

void displayproduct(product* parr,int size)
{
	for(int i=0;i<size;i++){
	printf("p1: id:%d name:%s quantity:%d price:%d\n",(parr+i)->id,(parr+i)->name,(parr+i)->quantity,(parr+i)->price);
   }
}