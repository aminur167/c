#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        float result;
        result=(float)(a+b)/2;
        if(result>c)
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