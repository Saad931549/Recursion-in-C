#include<stdio.h>
//Program to display the digits of an integer in forward order
void displayDigits(int);
    int main()
    {
    printf("Enter the number: ");
    int n;
    scanf("%d",&n);
    displayDigits(n);
        return 0;
    }
void displayDigits(int n)
    {
        if ((n%10)==0)
        {
            return;
        }
        
        int rem=n%10;
        displayDigits(n/10);
        printf("%d\n",rem);
    }