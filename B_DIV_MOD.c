#include <stdio.h>

long long fa(long long x, long long a) {
    return (x / a) + (x % a);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long l, r, a;
        scanf("%lld %lld %lld", &l, &r, &a);

        long long max_fa = 0;

        for (long long x = r; x >= l && x > r - a; x--) {
            long long result = fa(x, a);
            if (result > max_fa) max_fa = result;
        }

        printf("%lld\n", max_fa);
    }

    return 0;
}
