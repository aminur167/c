#include<stdio.h>
int main()
{
    int a,b,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        int result;
        result=b-a;
        if(b<a)
        {
            printf("0\n");
        }
        else 
        {
            printf("%d\n",result);
        }
    }
    return 0;
}