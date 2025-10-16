#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int result;
        result=a*4+b;
        printf("%d\n",result);
    }
    return 0;
}