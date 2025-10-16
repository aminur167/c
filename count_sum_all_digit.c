#include<stdio.h>
int main()
{
    int a,modulas,temp,sum;
    printf("Enter any digit:");
    scanf("%d",&a);
    temp=a;
    modulas=temp/10;
    temp=modulas/10;
    sum=sum+modulas;
    printf("%d",sum);

    return 0;
}