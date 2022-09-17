// 6. Write a program to calculate factorial of a number6. Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for ( i = n; i>=1 ; i--)
    {
        fact=fact*i;
    }
     printf("Factorial of number :- %d",fact);
     return 0;
}