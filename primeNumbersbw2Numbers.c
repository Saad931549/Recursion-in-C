#include<stdio.h>
//Program to print prime numbers between 2 numbers using recursion
int checkprime(int, int);
    int main()
    {
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    for (int i = a; i <= b; i++)
    {
        if(checkprime(2,i)!=0)
        printf("%d is a prime number\n", checkprime(2,i));

    }
    
        return 0;
    }

    int checkprime(int i, int n)
    {
        if(i==n)
            return n;
        else if(n%i==0)
            return 0;
        else
            checkprime(i+1,n);
    }