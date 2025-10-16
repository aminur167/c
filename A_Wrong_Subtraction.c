#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    while (n--)
    {
        if(m%10!=0)
        {
            m--;
        }
        else
        {
            m=m/10;
        }
    }
    printf("%d\n",m);   
    return 0;
}