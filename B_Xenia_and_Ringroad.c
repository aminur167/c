#include <stdio.h>
int main() 
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[m]; 
    for (int i=0;i<m;i++) 
    {
        scanf("%d",&a[i]);  
    }
    int t=0;
    int arr=1;
    for (int i=0;i<m;i++) 
    {
        if (a[i]>=arr) 
        {
            t=t+a[i]-arr;
        } 
        else 
        {
            t=t+n-arr+a[i]; 
        }
        arr=a[i]; 
    }
    printf("%d\n",t); 
    return 0;
}
