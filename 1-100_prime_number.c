#include<stdio.h>
int main()
{
    int num,i,count;
    for(num=1;num<=100;num++)
      if(num<2)
    {
        count=1;
    }
    else
    {
        for(i=2;i<=num;i++)

        {
            if(num%i==0)
            {
                count=1;
                break;

            }
        }
    }
    if(count==0)
    {
        printf("%d\n",num);
    }
}
