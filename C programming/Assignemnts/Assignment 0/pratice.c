void main(){
	int no = 73528;
	int r;
	int sum = 0;
	while(no>0){
		r = no%10;
		sum = sum+r;
		no = no/10;
	}
	printf("sum=%d",sum);
}