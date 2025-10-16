#include <stdio.h>
int main() 
{
    char arr[101];  
    int count=0;
    scanf("%s",arr);  
    int ar[26]={0};
    for(int i=0;arr[i]!='\0';i++) 
    {
        int a=arr[i]-'a';
        if (ar[a]==0) 
        {
            ar[a]=1;
            count++;
        }
    }
    if (count%2==0) 
    {
        printf("CHAT WITH HER!\n");
    } 
    else 
    {
        printf("IGNORE HIM!\n");
    }
    return 0;
}
