#include<stdio.h>
void sumof1to5();
int main(){
	sumof1to5();
}
void sumof1to5(){
	int i=1;
	int sum=0;
	while(i<=5){
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
}