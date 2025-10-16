#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            printf("LOSS\n");
        }
        else if(a<b)
        {
            printf("PROFIT\n");
        }
        else 
        {
            printf("NEUTRAL\n");
        }
    }
    return 0;
}