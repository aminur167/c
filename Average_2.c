#include<stdio.h>
int main()
{
    float A,B,C;
    float MEDIA;
    scanf("%f %f %f",&A,&B,&C);
    MEDIA = (2*A+3*B+5*C)/10;
    printf("MEDIA = %.1f\n",MEDIA);
    return 0;
}