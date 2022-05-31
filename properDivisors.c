#include<stdio.h>
//C program that displays all the proper divisors of a number and returns their sum
    int properDivisors(int, int);
    int main()
    {
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The sum of all the proper divisor of %d is %d", n, properDivisors(1,n));
        return 0;
    }
    int properDivisors(int i, int n)
    {
        if(i>n/2)
            return 0;
        
        if(n%i==0)
        {
            printf("%d is a proper divisor\n",i);
            return(i+properDivisors(i+1, n));
        }    

        properDivisors(i+1,n);
        
    }