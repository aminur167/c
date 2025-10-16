#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d %d",&n,&t);
    int result;
    if(n%t==0)
    {
        printf("%d\n",n);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}