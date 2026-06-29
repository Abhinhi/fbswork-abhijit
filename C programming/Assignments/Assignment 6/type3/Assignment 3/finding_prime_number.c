#include<stdio.h>
void findingprimenumber(int);
void main(){
	int n;
	printf("enter number:");
	scanf("%d",&n);
     findingprimenumber(n);
}
void findingprimenumber(int n){
		int i=1,count=0;
	while(i<=n){	
		if(n%i==0)
		{
			count++;
		}
		i++;
	}
	if(count==2)
	printf("prime");
	else
	printf("not prime");
}