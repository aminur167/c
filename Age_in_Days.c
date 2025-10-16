#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,a;
    scanf("%d",&n);
    int rem;
    m=n/365;
    printf("%d ano(s)\n",m);
    m=n%365;
    a=m/30;
    printf("%d mes(es)\n",a);
    a=m%30;
    printf("%d dia(s)\n",a);
    return 0;
}