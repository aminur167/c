#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[] = {500, 100, 50, 10, 5, 1};
    int count[6] = {0};

    for (int i = 0; i < 6; i++)
    {
        count[i] = N / arr[i];
        N %= arr[i];
    }
    for (int i = 5; i >= 0; i--) 
    {
        while (count[i]--) {
            printf("%d ",arr[i]);
        }
    }

    return 0;
}
