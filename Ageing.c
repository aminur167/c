#include<stdio.h>
int main()
{
    int n,i,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        int result;
        result=a-10;
        printf("%d\n",result);
    }
    return 0;
}