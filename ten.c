//10. Write a program to reverse a given number
#include<stdio.h>
int main()
{
    int i,n,rem,rev;
    printf("Enter a number : ");
    scanf("%d",&n);
    while (n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("%d",rev);
    return 0;
}