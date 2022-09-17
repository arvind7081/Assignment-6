//1. Write a program to calculate sum of first N natural numbers
#include <stdio.h>
int main()
{
    int i, n, s = 0;
    printf("Enter Input : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        s = s + i;
    }
    printf("Sum = %d ", s);
    return 0;
}