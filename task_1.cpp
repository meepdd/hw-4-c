#include <stdio.h>

int main() {
    int month, year;
    scanf("%d %d", &month, &year);

    int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // проверяем високосность года и изменяем количество дней в феврале
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        days_in_month[1] = 29;
    }

    int days = days_in_month[month - 1];
    printf("%d\n", days);

    return 0;
}