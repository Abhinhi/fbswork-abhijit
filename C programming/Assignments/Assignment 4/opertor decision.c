#include <stdio.h>

int main() {
    int n, p;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Press 1 to check even or odd\n");
    printf("Press 2 to check prime or not\n");
    printf("Press 3 to check palindrome or not\n");
    printf("Press 4 to check positive/negative/zero\n");
    printf("Press 5 to reverse number\n");
    printf("Press 6 to find sum of digits\n");

    scanf("%d", &p);

    if(p==1) {
        if(n%2 == 0)
            printf("Even\n");
        else
            printf("Odd\n");
    }

    else if(p == 2) {
        int i,count = 0;
        for(i=1;i<=n;i++) {
            if(n%i==0)
                count++;
        }

        if(count==2)
            printf("Prime\n");
        else
            printf("Not prime\n");
    }

    else if(p==3) {
        int temp =n,rev=0;

        while(temp!=0) {
            rev=rev*10+temp%10;
            temp=temp/10;
        }

        if(n==rev)
            printf("Palindrome number\n");
        else
            printf("Not palindrome\n");
    }

    else if(p==4) {
        if(n>0)
            printf("Positive number\n");
        else if(n<0)
            printf("Negative number\n");
        else
            printf("Zero\n");
    }

    else if(p==5) {
        int temp=n,rev=0;

        while(temp!=0) {
            rev=rev*10+temp%10;
            temp=temp/10;
        }

        printf("Reversed number: %d\n", rev);
    }

    else if(p==6) {
        int temp=n,sum=0;

        while(temp!=0) {
            sum+=temp%10;
            temp=temp/10;
        }

        printf("Sum of digits = %d\n",sum);
    }

    else {
        printf("Invalid option\n");
    }

    return 0;
}