
#include<stdio.h>
int main()
{
    int n,col,row;
    printf("Enter any number:");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            printf(" %d",col);
        }
        printf("\n");
    }
}
