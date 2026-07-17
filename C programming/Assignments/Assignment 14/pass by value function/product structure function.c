#include<stdio.h>
#include<string.h>
typedef struct product
{
	int id;
	char name[20];
	int quantity;
	int price;	
}product;
product storeproduct();
void displayproduct(product);
void main(){
	product p1,p2;
	
	printf("Enter p1 details\n");
	p1=storeproduct();
	
	printf("Enter p2 details\n");
	p2=storeproduct();
	
	printf("p1 details\n");
	displayproduct(p1);
	
	printf("p2 details\n");
	displayproduct(p2);
	
}
product storeproduct()
{
	product temp;
	printf("enter id:");
	scanf("%d",&temp.id);
	printf("enter name:");
	fflush(stdin);
	gets(temp.name);
	printf("enter quantity:");
	scanf("%d",&temp.quantity);
	printf("enter price:");
	scanf("%d",&temp.price);
	return temp;
}

void displayproduct(product p)
{
	printf("p1: id:%d name:%s quantity:%d price:%d\n",p.id,p.name,p.quantity,p.price);
}