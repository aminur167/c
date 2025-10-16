#include<stdio.h>
int main()
{
    int n;
    int a,i;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            printf("Yes\n");
        }
        else 
        {
            printf("No\n");
        }
    }
    return 0;
}