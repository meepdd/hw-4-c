#include <stdio.h>

int main() {
    int n, i, count = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
