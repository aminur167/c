#include <stdio.h>

#define MAX_N 200000
#define MAX_VAL (1 << 30)

void solve() {
    int n;
    unsigned int x;
    scanf("%d %u", &n, &x);

    unsigned int result[MAX_N];
    unsigned int current_or = 0;

    // Fill the array with distinct numbers
    for (int i = 0; i < n - 1; i++) {
        result[i] = i;
        current_or |= i;
    }

    // Adjust the last element to satisfy OR condition
    result[n - 1] = x ^ current_or; 

    // Ensure the last element is non-negative and within the valid range
    if (result[n - 1] >= MAX_VAL) {
        printf("-1\n");  // No valid solution
        return;
    }

    // Print the result
    for (int i = 0; i < n; i++) {
        printf("%u ", result[i]);
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}
