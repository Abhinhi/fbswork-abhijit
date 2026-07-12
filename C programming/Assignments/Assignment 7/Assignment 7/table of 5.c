#include<stdio.h>
void tableof5(int* n);
void main() {
	int n=5;
	tableof5(&n);

}
void tableof5(int* n) {
	int i=1;
	while(i<=10) {
		printf("%d ",*n);
		*n=*n+5;
		i++;
	}
}