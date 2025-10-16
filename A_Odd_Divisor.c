#include<stdio.h>
int main()
{
    long long int t,n;
    scanf("%lld",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%lld",&n);
        while (n%2==0)
        {
            n=n/2;
        }       
        if(n>1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}