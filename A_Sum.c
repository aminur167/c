#include<stdio.h>
int main()
{
    int a,b,c,t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a==b+c||b==a+c||c==a+b)
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