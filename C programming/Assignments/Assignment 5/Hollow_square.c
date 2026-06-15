#include<stdio.h>
int main(){
	int n = 4;
	for(int row=1;row<=n;row++){
		for(int col=1;col<=n;col++){
			if(row==4 ||
			   col==4 ||
			   row==1 ||
			   col==1){
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