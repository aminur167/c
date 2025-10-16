#include<stdio.h>
int main()
{
    int a,b,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        int result;
        result=b-a;
        printf("%d\n",result);
    }
    return 0;
}