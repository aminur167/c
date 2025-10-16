#include<stdio.h>
#include<math.h>
int main()
{
    double a1,a2,b1,b2;
    scanf("%lf %lf %lf %lf",&a1,&a2,&b1,&b2);
    double result;
    result=sqrt((b1-a1)*(b1-a1)+(b2-a2)*(b2-a2));
    printf("%.4lf\n",result);

    return 0;
}