#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        int result;
        result=a-b;
        if(a>b)
        {
            printf("%d\n",result);
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}