#include<stdio.h>
void divisibleby3or5();
  void main(){
  divisibleby3or5();
   }
   void divisibleby3or5(){
   	int no;
   	printf("enter number:");
   	scanf("%d",&no);
   if(no%3==0){
   	if(no%5==0){
   		printf("divisible by both");
	   }
	   else{
	   	printf("divisible by 3 not by 5");
	   }
}
	   else{
	   	if(no%5==0){
	   		printf("divisible by 5 but not by 3");
		   }
		   else{
		   	printf("divisible by none");
		   }
	   }
   }