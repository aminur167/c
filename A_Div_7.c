#include<stdio.h>
int main()
{
    int t,x;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&x);
        if(x%7==0)
        {
            printf("%d\n",x);
        }
        else
        {
            int lower=(x/7)*7;
            int uper=lower+7;
            if(x-lower<uper-x)
            {
                printf("%d\n",lower);
            }
            else
            {
                printf("%d\n",uper);
            }
        }
    }   
    return 0;
}