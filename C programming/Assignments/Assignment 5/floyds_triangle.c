#include<stdio.h>
int main(){
	int n=4;
	int a = 1;
	for(int row=1;row<=n;row++){
		for(int col=1;col<=row;col++){
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
	return 0;
}