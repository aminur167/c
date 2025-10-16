#include <stdio.h>

int main() {
    int T, N, max1, max2, x;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        max1 = max2 = -1;
        while (N--) {
            scanf("%d", &x);
            if (x > max1) max2 = max1, max1 = x;
            else if (x > max2 && x != max1) max2 = x;
        }
        printf("%d\n", max1 + max2);
    }
    return 0;
}
