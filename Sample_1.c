#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int d1 = num % 10;
    int d2 = (num / 10) % 10;
    int d3 = num / 100;

    printf("Digits in reverse order: %d %d %d\n", d1, d2, d3);
    return 0;
}
