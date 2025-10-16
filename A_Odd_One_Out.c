#include<stdio.h>
int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(c==b)
        {
            printf("%d\n",a);
        }
        else if(a==c)
        {
            printf("%d\n",b);
        }
        else if(a==b)
        {
            printf("%d\n",c);
        }
    }
    return 0;
}