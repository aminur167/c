#include<stdio.h>
int main()
{
    int t,a;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&a);
        int temp,rem,sum=0;
        temp=a;
        while(temp!=0)
        {
            rem=temp%10;
            sum=sum+rem;
            temp=temp/10;
        }
        printf("%d\n",sum);

    }
    return 0;
}