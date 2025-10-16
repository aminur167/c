#include<stdio.h>
int main()
{
    int a,b,t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        int result;
        result=a+b;
        printf("%d\n",result);
    }
    return 0;
}