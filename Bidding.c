#include<stdio.h>
int main()
{
    int a,b,c,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a>b&&a>c)
        {
            printf("Alice\n");
        }
        else if(b>a&&b>c)
        {
            printf("Bob\n");
        }
        else
        {
            printf("Charlie\n");
        }
    }
    return 0;
}