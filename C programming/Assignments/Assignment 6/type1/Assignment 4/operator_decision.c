#include <stdio.h>
void evenodd();
void findprime();
void findpalindrome();
void findnumbertype();
void reversenumber();
void getsumofdigit();
int main() {
    int p;
    printf("Press 1 to check even or odd\n");
    printf("Press 2 to check prime or not\n");
    printf("Press 3 to check palindrome or not\n");
    printf("Press 4 to check positive/negative/zero\n");
    printf("Press 5 to reverse number\n");
    printf("Press 6 to find sum of digits\n");
    printf("enter number to perform operation:");
    scanf("%d", &p);

    if (p==1) {
        evenodd();
    }

    else if(p==2) {
        findprime();
    }

    else if(p==3) {
        findpalindrome();
    }

    else if (p == 4) {
        findnumbertype();
    }

    else if (p == 5) {
        reversenumber();
    }

    else if(p==6) {
        getsumofdigit();
    }

    else {
        printf("Invalid option\n");
    }

    return 0;
}
void evenodd()
{    
    int n;
	printf("Enter number: ");
    scanf("%d", &n);
	if(n%2==0)
            printf("Even\n");
        else
            printf("Odd\n");
}
void findprime()
{
	int n;
	printf("Enter number: ");
    scanf("%d", &n);
	int i,count=0;
        for (i=1;i<=n;i++) {
            if (n%i==0)
                count++;
        }

        if(count==2)
            printf("Prime\n");
        else
            printf("Not prime\n");
}
void findpalindrome()
{
	int n;
	printf("Enter number: ");
    scanf("%d", &n);
	int temp=n,rev=0;

        while(temp!=0) {
            rev=rev*10+temp%10;
            temp=temp/10;
        }

        if(n==rev)
            printf("Palindrome number\n");
        else
            printf("Not palindrome\n");
}
void findnumbertype()
{
	int n;
	printf("Enter number: ");
    scanf("%d",&n);
	if (n>0)
            printf("Positive number\n");
        else if (n<0)
            printf("Negative number\n");
        else
            printf("Zero\n");
}
void reversenumber()
{
	int n;
	printf("Enter number: ");
    scanf("%d",&n);
	int temp=n,rev=0;

        while(temp!=0) {
            rev=rev*10+temp%10;
            temp=temp/10;
        }

        printf("Reversed number: %d\n",rev);
}
void getsumofdigit()
{
	int n;
	printf("Enter number: ");
    scanf("%d",&n);
	int temp=n,sum=0;

        while(temp!=0) {
            sum+=temp%10;
            temp=temp/10;
        }

        printf("Sum of digits=%d\n",sum);
}