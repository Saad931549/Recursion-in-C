#include<stdio.h>
int gcd(int,int);
    int main()
    {
    int a,b;
    printf("Program to find the GCD of two numbers\n");
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);
    printf("The greatest common divisor of the two numbers is: %d", gcd(a,b));
        return 0;
    }
int gcd(int a, int b)
{   
    int rem=(a>b)?(a%b):(b%a);
    
    if(rem==0)
        return(a>b)?b:a;

    (a>b)?gcd(b,rem):gcd(a,rem);

}