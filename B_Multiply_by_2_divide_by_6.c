#include <stdio.h>
int main() 
{
    int t; 
    scanf("%d", &t); 
    while(t--)
    {
        int n;
        scanf("%d",&n);    
        int count=0;
        while(n!=1) 
        {
            if(n%6==0) 
            {
                n=n/6;  
            } 
            else if(n%3==0) 
            {
                n=n*2; 
            } 
            else 
            {
                break;
            }
            count++;
        }   
        if(n==1) 
        {
            printf("%d\n",count);
        } 
        else 
        {
            printf("-1\n");
        }
    }

    return 0;
}
