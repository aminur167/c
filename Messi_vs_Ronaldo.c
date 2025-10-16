#include<stdio.h>
int main()
{
    int a,b,m,n,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    m=a*2+b*1;
    n=c*2+d*1;
    if(m>n)
    {
        printf("Messi\n");
    }
    else if(m<n)
    {
        printf("Ronaldo\n");
    }
    else
    {
        printf("Equal\n");
    }

    return 0;
}