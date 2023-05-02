#include <stdio.h>

void toBinary(int n) {
    if (n < 0) {
        putchar('-');
        n = -n;
    }
    if (n >= 2) {
        toBinary(n / 2);
    }
    putchar(n % 2 + '0');
}

int main() {
    int n;
    scanf("%d", &n);
    toBinary(n);
    putchar('\n');
    return 0;
}
