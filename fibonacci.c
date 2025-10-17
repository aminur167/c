#include<stdio.h>
int main()
{
    int n,sum=0,temp,remainder;
    printf("Enter any number:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        remainder=temp%10;
        sum=sum*10+remainder;
        temp=temp/10;
    }
    printf("Sum of digit is : %d\n",sum);

    return 0;
}
