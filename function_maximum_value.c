#include<stdio.h>
int display(int x[])
{
    int i,max=x[0];
    for(i=1;i<6;i++)
    {
        if(max<x[i])
        {
            max=x[i];
        }
    }
}
int main()
{
    int num[6]={1,2,3,4,5,6};
    int maxvalue=display(num);
    printf("%d\n",maxvalue);
    return 0;
}