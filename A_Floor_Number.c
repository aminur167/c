#include<stdio.h>
int main()
{
    int a,b,t;
    int floor;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        if(a<=2)
        {
            printf("1\n");
        }
        else
        {
            a=a-2;
            floor=(a+b-1)/b+1;
            printf("%d\n",floor);
        }
    }
    return 0;
}