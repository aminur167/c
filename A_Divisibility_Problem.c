#include<stdio.h>
int main()
{
    int n,a,b;
    int count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if(a%b==0)
        {
            printf("%d\n",count);
        }
        else
        {
            printf("%d\n",(b-(a%b)));
        }
    }
    return 0;
}