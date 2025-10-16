#include<stdio.h>
double area(double h,double b)
{
    return 0.5*h*b;
}
int main()
{
    double height,base;
    printf("Enter any two digit:");
    scanf("%lf %lf",&height,&base);
    double result=area(height,base);
    printf("%lf",result);
}