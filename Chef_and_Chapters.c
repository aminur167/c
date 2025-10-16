#include<stdio.h>
int main()
{
    int a,b,c;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        int result;
        result=a*b*c;
        printf("%d\n",result);
    }
    return 0;
}