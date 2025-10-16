#include<stdio.h>
int main()
{
    int a,b,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        int m;
        m=ceil(a/6.0);
        int result;
        result=m*b;
        printf("%d\n",result);
    }
    return 0;
}