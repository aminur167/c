#include <stdio.h>
#include <stdlib.h>

int count_inversions(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                count++;
            }
        }
    }
    return count;
}

void find_best_subarray(int *arr, int n) {
    int min_inversions = count_inversions(arr, n);
    int best_l = 1, best_r = 1;
    
    for (int l = 0; l < n; l++) {
        for (int r = l; r < n; r++) {
            int temp = arr[l];
            for (int i = l; i < r; i++) {
                arr[i] = arr[i + 1];
            }
            arr[r] = temp;
            
            int current_inversions = count_inversions(arr, n);
            if (current_inversions < min_inversions) {
                min_inversions = current_inversions;
                best_l = l + 1;
                best_r = r + 1;
            }
            
            for (int i = r; i > l; i--) {
                arr[i] = arr[i - 1];
            }
            arr[l] = temp;
        }
    }
    printf("%d %d\n", best_l, best_r);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int *arr = (int*)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        find_best_subarray(arr, n);
        free(arr);
    }
    return 0;
}
