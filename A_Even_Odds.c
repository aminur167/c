#include <stdio.h>
int main()
{
    long long n,k;
    scanf("%lld %lld",&n,&k);
    long long x;
    x=(n+1)/2;
    if (k<=x)
    {
        printf("%lld\n",2*k-1);
    } 
    else 
    {
        printf("%lld\n",2*(k-x));
    }
    return 0;
}
