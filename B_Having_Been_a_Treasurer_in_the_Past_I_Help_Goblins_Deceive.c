#include <stdio.h>
#include <string.h>

#define MAX_N 200000

void max_subsequence_count(int t) {
    while (t--) {
        int n;
        char s[MAX_N + 1];
        
        scanf("%d", &n);
        scanf("%s", s);
        
        if (n < 3) {
            printf("0\n");
            continue;
        }
        
        int count_dash = 0, count_underscore = 0;
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '-') count_dash++;
            else count_underscore++;
        }
        
        if (count_dash < 2 || count_underscore < 1) {
            printf("0\n");
            continue;
        }
        
        // Distribute '-' to maximize subsequences
        int count_dash1 = count_dash / 2;
        int count_dash2 = count_dash - count_dash1;
        
        long long max_count = (long long)count_dash1 * count_underscore * count_dash2;
        printf("%lld\n", max_count);
    }
}

int main() {
    int t;
    scanf("%d", &t);
    max_subsequence_count(t);
    return 0;
}
