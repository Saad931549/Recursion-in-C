#include<stdio.h>
//program to reverse a number using recursive function
int reverse(int , int);
    int main()
    {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The reverse of the number is %d", reverse(n,0));
        return 0;
    }
    int reverse(int n, int rev)
    {
        if(n==0)
            return rev;

        int rem=n%10;
        rev=rev*10+rem;
        reverse(n/=10, rev);
    }