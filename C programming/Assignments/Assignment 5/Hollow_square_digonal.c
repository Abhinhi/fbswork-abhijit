#include<stdio.h>
int main(){
	int n = 5;
	for(int row=1;row<=n;row++){
		for(int col=1;col<=n;col++){
			if(row==n ||
			   col==n ||
			   row==1 ||
			   col==1 ||
			   row==col){
			printf("* ");
		}
		else{
			printf("  ");
		}
		}
		printf("\n");
	}
	return 0;
}