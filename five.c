// 5. Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int  main()
{
    int i,n,cube,s=0;
    printf("Enter Input : ");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        cube=i*i*i;
        s=s+cube;
    }
    printf("Sum = %d",s);
    return 0;
}