#include<stdio.h>
int main()
{
    int n,result;
    scanf("%d",&n);
    result=n/5;
    if (n%5!= 0) 
    {
        result++;
    }
    printf("%d\n",result);
    return 0;
}
