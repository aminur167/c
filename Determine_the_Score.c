#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int result;
        scanf("%d %d",&a,&b);
        result=(a/10)*b;
        printf("%d\n",result);
    }
    return 0;
}