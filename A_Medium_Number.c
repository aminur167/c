#include<stdio.h>
int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if((a<b&&b<c)||(b<a&&c<b))
        {
            printf("%d\n",b);
        }
        else if((a>b&&a<c)||(a>c&&a<b))
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