#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7};
    int value,position=-1,i;
    scanf("%d",&value);
    for(i=0;i<7;i++)
    {
        if(value==a[i])
        {
            position=i+1;
            break;
        }
    }
    if(position==-1)
    {
        printf("Not found");
    }
    else
    {
        printf("Item is %d: %d\n",value,position);
    }
    return 0;
}