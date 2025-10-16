#include<stdio.h>
#include<string.h>
int main()
{
    char S[20],T[20];
    scanf("%s \n%s",S,T);
    int st=strlen(S),st1=strlen(T);
    printf("%d %d\n",st,st1);
    printf("%s %s\n",S,T);

    return 0;
}