#include<stdio.h>
int my_strspn(const char* s,const char* accept);

void main() {
	char str1[]="abcde123";
	char str2[]="abcde";
	int length =my_strspn(str1,str2);
    printf("%d",length);
}
int my_strspn(const char* s,const char* accept) 
{
	int i,j,flag,count;

	i=0;
	count=0;

	while(s[i]) {
		j=0;
		flag=0;

		while(accept[j]) {
			if(s[i]==accept[j]) {
				flag=1;
				break;
			}
			j++;
		}

		if(flag==0)
			break;

		count++;
		i++;
	}

	return(count);
}
