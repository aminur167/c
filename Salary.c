#include<stdio.h>
int main()
{
    int a,b;
    float m,n;
    scanf("%d %d",&a,&b);
    scanf("%f",&m);
    printf("NUMBER = %d\n",a);
    n=b*m;
    printf("SALARY = U$ %.2f\n",n);
    return 0;
}