#include<stdio.h>
int main()
{
    int k,n,w;
    scanf("%d %d %d",&k,&n,&w);
    int result;
    result=k*(w*(w+1)/2);
    int sum=result-n;
    printf("%d\n",sum);
    return 0;
}          