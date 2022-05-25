#include<stdio.h>
//Program to count the sum of digits of an integer using the method of recursion
int sod(int);
    int main()
    {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int ans;
    ans=sod(n);
    printf("The sum of digits is %d", ans);
        return 0;
    }
int sod(int n)
    {
        if (n==0)
        {
            return 0;
        }
    int rem=n%10;
    return(rem+sod(n/10));         
    }
