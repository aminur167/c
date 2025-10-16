#include<stdio.h>
int main()
{
    int a,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a<3)
        {
            printf("LIGHT\n");
        }
        else if(a>=3&&a<7)
        {
            printf("MODERATE\n");
        }
        else
        {
            printf("HEAVY\n");
        }
    }
    return 0;
}