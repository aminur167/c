#include<stdio.h>
int main()
{
    int i,n,factorial=1;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    printf("%d",factorial);
    return 0;
}