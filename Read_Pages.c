#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int result;
        scanf("%d %d %d",&a,&b,&c);
        result=b*c;
        if(a<=result)
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