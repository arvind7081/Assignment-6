//3. Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    int i,n,odd,s=0;
    printf("Enter Input : ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        odd=2*i-1;
        s=s+odd;
    }
    printf("%d",s);
    return 0;
}