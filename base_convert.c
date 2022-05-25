#include<stdio.h>
//Program to convert a positive decimal number to binary, octal or hexadecimal depending on user input
void convert(int, int);
    int main()
    {
    int n,b;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Enter the base: ");
    scanf("%d",&b);
    switch (b)
    {
    case 2:   
    case 8:
    case 16:
        convert(n,b);
        break;
    default:
        printf("Invalid base");
    }
        return 0;
    }
void convert(int num, int base)
{
    if (num==0)
    {
        return;
    }
    int rem=num%base;
    convert(num/base, base);
    if(rem<10)
        printf("%d", rem);
    else
        printf("%c", rem-10+'A');
}