// 9. Write a program to calculate LCM of two numbers.
#include<stdio.h>
int main()
{
    int l,a,b;
    printf("Enter a two number : ");
    scanf("%d%d",&a,&b);
    for ( l = 1; l <= a*b; l++)
    {
        if (l%a==0 && l%b==0)
        {
            break;
        }   
    }
    printf("LCM is = %d",l);
}