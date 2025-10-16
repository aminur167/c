#include<stdio.h>
int main()
{
    int n,max=0,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+(max-arr[i]);
    }
    printf("%d\n",sum);
    return 0;
}