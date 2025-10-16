#include<stdio.h>
int main()
{
    int a,b,c;
    int t,k;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        k=c-(c%a)+b;
        if(k>c)
        {
            k=k-a;
        }
        printf("%d\n",k);
    }

    return 0;
}