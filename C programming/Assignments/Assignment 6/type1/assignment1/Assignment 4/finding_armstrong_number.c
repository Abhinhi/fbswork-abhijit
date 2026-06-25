#include<stdio.h>
void findingarmsno();
void main(){
	findingarmsno();
}
void findingarmsno(){
	int n;
	printf("enter number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	
	int rem,temp,sum=0;
	temp=i;
	while(temp>0){
		rem=temp%10;
		sum=sum+rem*rem*rem;
		temp=temp/10;
	}
	if(i==sum)
	printf("%d ",i);
	
	}
}