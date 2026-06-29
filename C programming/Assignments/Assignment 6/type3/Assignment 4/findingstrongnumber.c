#include<stdio.h>
void findingstrongno(int);
void main(){
     int n;
	printf("enter number:");
	scanf("%d",&n);
	findingstrongno(n);
}
void findingstrongno(int n){
	
	for(int i=1;i<=n;i++){
		int temp=i;
		int sum=0;
		while(temp>0){
			int rem=temp%10;
			int fact=1;
			for(int j=1;j<=rem;j++){
				fact*=j;
			}
			sum+=fact;
			temp /=10;
		}
		if (sum==i){
			printf("%d ",i);
	}
		}
}