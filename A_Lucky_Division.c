#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%4==0||a%7==0||a%44==0||a%47==0||a%74==0||a%77==0)
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }
    return 0;
}
