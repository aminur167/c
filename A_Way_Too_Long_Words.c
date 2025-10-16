#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char arr[101];
        scanf("%s\n",arr);
    
    a=strlen(arr);
    if(a>10)
    {
        printf("%c%d%c\n",arr[0],a-2,arr[a-1]);
    }
    else
    {
        printf("%s\n",arr);
    }
    }
    return 0;
}