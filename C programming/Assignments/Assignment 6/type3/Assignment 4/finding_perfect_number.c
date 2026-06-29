#include<stdio.h>
void findingperfectno(int);
void main(){
	int n;
	printf("enter number:");
	scanf("%d",&n);
	findingperfectno(n);
}
void findingperfectno(int n){
	
	for(int i=1;i<=n;i++){
		int sum=0;
		for(int j=1;j<i;j++){
			if(i%j==0)
			sum+=j;
		}
		if(sum==i){
			printf("%d ",i);
		}	
}
}