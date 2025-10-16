#include<stdio.h>
int main()
{
    int t,m,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&m,&n);
        int result=m*n;
        printf("%d\n",result);
    }
    return 0;
}