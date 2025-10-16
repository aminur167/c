#include<stdio.h>
int main()
{
    int n,result,a,b;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            result=a-b;
            printf("%d\n",result);
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}