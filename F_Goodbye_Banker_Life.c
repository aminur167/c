#include <stdio.h>
#include <stdlib.h>

void generate_nth_row(int n, int k) {
    int *row = (int*)malloc(n * sizeof(int));
    row[0] = k;

    for (int i = 1; i < n; i++) {
        row[i] = k;
    }

    for (int i = 2; i < n; i++) {
        for (int j = i - 1; j > 0; j--) {
            row[j] ^= row[j - 1];
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", row[i]);
    }
    printf("\n");
    free(row);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        generate_nth_row(n, k);
    }
    return 0;
}
