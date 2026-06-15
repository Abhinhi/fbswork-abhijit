#include<stdio.h>
int main(){
	int n=4;
	for(int row=1;row<=n;row++){
		for(int space=1;space<=n-row;space++){
			printf(" ");
		}
		for(int col=1;col<=row;col++){
			printf("* ");
		}
		printf("\n");
	}
	for(int row2=1;row2<=n-1;row2++){
		for(int space=1;space<=row2;space++){
			printf(" ");
		}
		for(int col2=1;col2<=n-row2;col2++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}