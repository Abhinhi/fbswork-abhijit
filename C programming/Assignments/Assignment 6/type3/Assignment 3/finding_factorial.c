#include<stdio.h>
void findingfactorial(int);
void main(){
   int n;
   printf("enter number:");
   scanf("%d",&n);
   findingfactorial(n);
}
void findingfactorial(int n){
	int i=1,fact=1;
   while(i<=n)
   {
   	fact=fact*i;
   	i++;
   }
   printf("%d",fact);
}
