#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d\n",a);
    int arr[]={100,50,20,10,5,2,1};
    for(int i=0;i<7;i++)
    {
        int note;
        note=a/arr[i];
        a=a%arr[i];
        printf("%d nota(s) de R$ %d,00\n",note,arr[i]);
    }
    return 0;
}