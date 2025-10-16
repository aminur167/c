#include<stdio.h>
#include<math.h>
int main()
{
    long long int n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);
    long long int count1 = (n + a - 1) / a;
    long long int count2 = (m + a - 1) / a;
    long long int result = count1 * count2;
    printf("%lld\n", result); 
    return 0;
}
