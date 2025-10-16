#include<stdio.h>
int main()
{
    int a,b,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int result;
        scanf("%d %d",&a,&b);
        result=b-a;
        printf("%d\n",result);
    }
    return 0;
}