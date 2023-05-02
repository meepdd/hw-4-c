#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    // Выводим заголовок таблицы
    printf(" Mon Tue Wed Thu Fri Sat Sun\n");

    // Выводим пробелы до первого числа
    for (int i = 1; i < n; i++) {
        printf("    ");
    }

    // Выводим числа месяца
    for (int i = 1; i <= k; i++) {
        printf("%4d", i);

        // Переходим на новую строку после воскресенья
        if ((i + n - 1) % 7 == 0 || i == k) {
            printf("\n");
        }
    }

    return 0;
}
