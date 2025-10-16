#include <stdio.h>

void solve(int k) {
    int n = 0; // Number of staffs
    int coords[500][2]; // To store coordinates
    
    int x = 0, y = 0; // Start placement from origin
    int pairs = 0; // Counter for pairs satisfying the condition
    
    while (pairs < k) {
        // Place a new point at (x, y)
        coords[n][0] = x;
        coords[n][1] = y;
        n++;
        
        // Add new pairs by placing new points in a structured way
        for (int i = 0; i < n - 1; i++) {
            if (coords[i][0] == x || coords[i][1] == y) {
                pairs++;
                if (pairs == k) break;
            }
        }
        
        // Update coordinates for the next point
        if (n % 2 == 0) x += 1; // Move right
        else y += 1; // Move up
    }
    
    printf("%d\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", coords[i][0], coords[i][1]);
    }
}

int main() {
    int t, k;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &k);
        solve(k);
    }
    return 0;
}
