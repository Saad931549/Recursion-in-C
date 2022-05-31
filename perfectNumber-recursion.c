#include<stdio.h>
//program to find perfect number using recursion
    int perfectNumber(int, int);
    int main()
    {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==perfectNumber(1,n))
        printf("%d is a perfect number",n);
    else
        printf("%d is not a perfect number",n);
    return 0;
    }

    int perfectNumber(int i, int n)
    {
        if(i>n/2)
            return 0;
            
        if(n%i==0)
            return(i+perfectNumber(i+1,n));
            
        perfectNumber(i+1,n);
    }
