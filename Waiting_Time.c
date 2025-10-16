#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        int result;
        result=a*7-b;
        printf("%d\n",result);
    }
    return 0;
}