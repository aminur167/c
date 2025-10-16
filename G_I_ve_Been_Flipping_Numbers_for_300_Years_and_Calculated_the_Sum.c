#include <stdio.h>
#define MOD 1000000007

// Function to calculate the reverse in base p
long long reverse_base_p(long long n, long long p) {
    long long reversed = 0;
    while (n > 0) {
        reversed = reversed * p + n % p;
        n /= p;
    }
    return reversed;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n, k;
        scanf("%lld %lld", &n, &k);

        long long sum = 0;
        for (long long p = 2; p <= k; p++) {
            long long rev_n_p = reverse_base_p(n, p);
            sum = (sum + rev_n_p) % MOD;
        }

        printf("%lld\n", sum);
    }

    return 0;
}
