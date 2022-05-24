#include<stdio.h>
void tofh(int, char, char, char);
    int main()
    {
    int n=5;
    char source='A', temp='B', destination='C';
    tofh(n,source, temp, destination);
        return 0;
    }
void tofh(int n,char source, char temp, char destination)
    {
        if (n==1)
        {
            printf("move disk %d from %c to %c\n",n,source, destination);
            return;
        }
        tofh(n-1,source, destination, temp);
        printf("move disk %d from %c to %c\n", n, source, destination);
        tofh(n-1, temp, source, destination);
        
    }