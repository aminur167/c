#include<stdio.h>
int main()
{
    int a,ans;
    printf("Enter any number:");
    scanf("%d",&a);
    ans=a/1000;
    if(ans%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}   