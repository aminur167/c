#include <stdio.h>

int main() {
    int T, n;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        long long sum = 0;
        for (int i = 1; i <= n; ++i) {
            int a = i, b = n;
            while (b != 0) {
                int temp = b;
                b = a % b;
                a = temp;
            }
            int gcd = a;
            sum += (i * n) / gcd;
        }
        printf("%lld\n", sum);
    }
    return 0;
}
