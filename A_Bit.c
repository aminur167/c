#include <stdio.h>
int main() 
{
    int n,x=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        char arr[5];
        scanf("%s",arr);
        if (arr[1] == '+')
        {
            x++;
        }
        else
        {
            x--; 
        }
    }
    printf("%d\n",x);
}
