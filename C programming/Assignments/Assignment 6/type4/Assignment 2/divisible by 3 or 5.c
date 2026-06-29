#include<stdio.h>
int divby3or5(int);
  void main(){
  	int no;
   	printf("enter number:");
   	scanf("%d",&no);
  int x=divby3or5(no);
   if(x==1)
   printf("divisible by both");
   else if(x==2)
   printf("divisible by 3 not by 5");
   else if(x==3)
   printf("divisible by 5 but not by 3");
   else
   printf("divisible by none");
   }
   int divby3or5(int no){
   	
   if(no%3==0){
   	if(no%5==0){
   	return 1;
	   }
	   else{
	   	return 2;
	   }
}
	   else{
	   	if(no%5==0){
	   		return 3;
		   }
		   else{
		   	return 4;
		   }
	   }
   }