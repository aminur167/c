#include<stdio.h>
int main()
{
    int a,n;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        scanf("%d\n",&n);
        if(n<6)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}