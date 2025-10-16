#include<stdio.h>
int main()
{
    int n,a,b,i;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        int result;
        result=10*a+90*b;
        printf("%d\n",result);
    }
    return 0;
}