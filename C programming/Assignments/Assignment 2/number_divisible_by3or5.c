#include<stdio.h>
  void main(){
  
   int no=15;
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