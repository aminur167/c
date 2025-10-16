#include <stdio.h>
#include <string.h>
int main() 
{
    int t;
    char s[4];
    scanf("%d", &t);
    for (int i = 0; i < t; i++) 
    {
        scanf("%s", s);
        if (strcasecmp(s, "yes") == 0) 
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
