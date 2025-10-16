#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,result,x,y;
    scanf("%lf %lf %lf",&a,&b,&c);
    result=b*b-4*a*c;
    if (result>=0&&a!=0)
    {
        x=(-b+sqrt(result))/(2*a);
        y=(-b-sqrt(result))/(2*a);
        printf("R1 = %.5lf\n",x);
        printf("R2 = %.5lf\n",y);
    }
    else
    {
        printf("Impossivel calcular\n");
    }
    return 0;
}
