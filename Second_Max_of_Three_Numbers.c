#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if((a>b&&c<b)||(a<b&&b<c))
        {
            printf("%d\n",b);
        }
        else if((b>a&&a>c)||(b<a&&a<c))
        {
            printf("%d\n",a);
        }
        else
        {
            printf("%d\n",c);
        }
    }
    return 0;
}