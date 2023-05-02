#include <stdio.h>

int main() {
    int n, num, zero_count = 0, pos_count = 0, neg_count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num == 0) {
            zero_count++;
        } else if (num > 0) {
            pos_count++;
        } else {
            neg_count++;
        }
    }
    printf("%d %d %d\n", zero_count, pos_count, neg_count);
    return 0;
}
