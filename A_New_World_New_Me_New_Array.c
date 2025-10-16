#include <stdio.h>
#include <stdlib.h>

void min_operations_to_sum(int t) {
    while (t--) {
        int n, k, p;
        scanf("%d %d %d", &n, &k, &p);
        
        int min_sum = n * (-p);
        int max_sum = n * p;
        
        if (k < min_sum || k > max_sum) {
            printf("-1\n");
            continue;
        }
        
        int diff = abs(k);
        int min_ops = (diff + p - 1) / p;
        printf("%d\n", min_ops);
    }
}

int main() {
    int t;
    scanf("%d", &t);
    min_operations_to_sum(t);
    return 0;
}
