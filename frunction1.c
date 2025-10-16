#include<stdio.h>
int result(int a,int b)
{
    int sum=a+b;
    return sum;
}
int main()
{
    int a,b;
    printf("Enter any two number:");
    scanf("%d %d",&a,&b);
    int s=result(a,b);
    printf("%d",s);
    return 0;
}