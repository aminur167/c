#include <stdio.h>
int main() 
{
    long long int n;
    scanf("%lld",&n);
    int count=0;
    while (n>0) 
    {
        int a=n%10;
        if (a==4||a==7) 
        {
            count++;
        }
        n=n/10;
    }
    if (count==4||count==7) 
    {
        printf("YES\n");
    } 
    else 
    {
        printf("NO\n");
    }

    return 0;
}
