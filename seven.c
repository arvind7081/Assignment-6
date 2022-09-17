// 7. Write a program to count digits in a given number
#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter Number : ");
    scanf("%d",&n);
    while (n>0)
    {
        n=n/10;
        count++;
    }
    printf("Total Digit = %d",count);
    return 0;
}