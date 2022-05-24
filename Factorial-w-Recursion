#include<stdio.h>
//factorial using Recursion
int fact(int);
    int main()
    {
    int n;
    printf("Enter a number to find factorial using Recursion: ");
    scanf("%d",&n);

    if(n<0)
        printf("Factorial does not exist for negative numbers");
    else
        printf("The factorial is %d",fact(n));
        return 0;
    }

    int fact(int n)
    {
        if(n==0)
            return 1;
        return n*fact(n-1);
    }