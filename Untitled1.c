#include<stdio.h>
int main()
{
 int a,b,sum=0,n1,n2;
 printf("Enter any two number:");
 scanf("%d %d",&n1,&n2);
 printf("1*2+2*3+......%d*%d",n1,n2);
 while(a<=n1&&b<=n2)
 {
    sum=sum+a*b;
    a=a+1;
    b=b+1;
 }
 printf("=%d\n",sum);
    return 0;
}
