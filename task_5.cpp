#include <stdio.h>

int main() {
    int sum = 0, count = 0;
    int n;
    scanf("%d", &n);
    while (n != 0) {
        sum += n;
        count++;
        scanf("%d", &n);
    }
    if (count == 0) {
        printf("0");
    } else {
        printf("%f", (double)sum / count);
    }
    return 0;
}
