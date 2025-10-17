#include<stdio.h>
int mian()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            break;
        }
    }
    printf("The smallest divisor of %d is grater than1 is : %d",n,i);

    return 0;
}
