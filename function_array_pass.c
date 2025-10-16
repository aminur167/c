#include<stdio.h>
void display(int x[])
{
    int i;
    for(i=0;i<6;i++)
    {
        printf("%d\n",x[i]);
    }
}


int main()
{
    int arr[]={1,2,3,4,5,6};
    display(arr);
    return 0;
}