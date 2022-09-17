// 4. Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
int main()
{
    int i,n,square,s=0;
    printf("Enter Input : ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        square=i*i;
        s=s+square;
    }
    printf("Sum = %d",s);
    return 0;
}