// 8. Write a program to check whether a given number is a Prime number or
// not.
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number to check prime or not : ");
    scanf("%d",&n);
    for ( i = 2; i <=n-1; i++)
    {
        if (n%i==0)
        {
            break;
        }
    }
    if (i==n)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is a not prime number",n);
    }
    return 0;
}