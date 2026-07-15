#include<stdio.h>
void findingprimeno();
void main(){
	findingprimeno();
}
void findingprimeno(){
	int n;
	printf("enter number:");
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		int count=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				count++;
			}
			
		}
		if(count==2)
			printf("%d ",i);
	}
}