#include<stdio.h>
int main()
{
    int n;
    int count=0;
    scanf("%d",&n);
    int a,b,c;
    for(int i=0;i<n;i++)
    {
        
        scanf("%d %d %d",&a,&b,&c);
        if((a+b+c)>=2)
        {
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}