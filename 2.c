#include<stdio.h>
int main()
{
    int n,i,a;
    scanf("%d",&n);
    int even=0,odd=0,neg=0,pos=0;
    for(i=1;i<n;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if(a<0)
        {
            neg++;
        }
        else if(a>0)
        {
            pos++;
        }
    }
    printf("Even: %d\nodd: %d\nneg: %d\npos: %d\n",even,odd,neg,pos);
    return 0;
}