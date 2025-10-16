#include<stdio.h>
int main()
{
    int a,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a<=70)
        {
            printf("0\n");
        }
        else if(a>70&&a<=100)
        {
            printf("500\n");
        }
        else
        {
            printf("2000\n");
        }
    }
    return 0;
}