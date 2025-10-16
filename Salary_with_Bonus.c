#include<stdio.h>
int main()
{
    double m,n,TOTAL;
    char b;
    scanf("%s",&b);
    scanf("%lf %lf",&m,&n);
    TOTAL=m+(n*15)/100;
    printf("TOTAL = R$ %.2lf\n",TOTAL);

    return 0;
}