#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t); 
    while(t--) 
    {
        int n,k;
        scanf("%d %d",&n,&k);       
        if(k*k<=n&&(n-k*k)%2==0) 
        {
            printf("YES\n");
        } 
        else 
        {
            printf("NO\n");
        }
    }   
    return 0;
}
