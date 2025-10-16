#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    fgets(a,5,stdin);
    printf("%s\n",a);
    return 0;
}