#include<stdio.h>
void count1to10();
int main(){
 count1to10();
} 
 void count1to10(){
	int i=1;
	while(i<=10){
		printf("%d ",i);
		i++;
	}
}