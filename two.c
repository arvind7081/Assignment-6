//2. Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
    int i,n,s=0,even;
    printf("Enter Input : ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        even = 2*i;
        s=s+even;
    }
    printf("Sum = %d ",s);
    return 0;
}