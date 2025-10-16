#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    float result;
    result=(float)(m*n)/12;
    printf("%.3f\n",result);
    return 0;
}