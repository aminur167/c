#include<stdio.h>
int main()
{
    int a,b,c,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        int result;
        result=a+b;
        if(result==c)
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