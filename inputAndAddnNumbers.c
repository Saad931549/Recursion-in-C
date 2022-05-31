#include<stdio.h>
int add(int);
    int main()
    {
    int n;
    printf("Enter how many numbers you want to add: ");
    scanf("%d",&n);
    printf("The sum of all the numbers entered is %d", add(n));
        return 0;
    }

int add(int n)
    {
        if(n==0)
            return 0;
        int m;
        printf("Enter the number: ");
        scanf("%d",&m);
        int sum=m+add(n-1);
        return sum;
    }