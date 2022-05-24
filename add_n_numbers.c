//program to input and add n numbers using Recursion
#include<stdio.h>
void display(int);
    int main()
    {
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    display(n);
        return 0;
    }

void display(int n)
{if (n==0)
    return;
display(n-1);
printf("%d",n);
}