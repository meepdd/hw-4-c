#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool check_password(char password[]) {
    int len = strlen(password);
    if (len < 8 || len > 14) {
        return false;
    }

    bool has_uppercase = false;
    bool has_lowercase = false;
    bool has_digit = false;
    bool has_special = false;

    for (int i = 0; i < len; i++) {
        if (!isascii(password[i]) || password[i] < 33 || password[i] > 126) {
            return false;
        }
        if (isupper(password[i])) {
            has_uppercase = true;
        } else if (islower(password[i])) {
            has_lowercase = true;
        } else if (isdigit(password[i])) {
            has_digit = true;
        } else {
            has_special = true;
        }
    }

    int classes_count = 0;
    if (has_uppercase) {
        classes_count++;
    }
    if (has_lowercase) {
        classes_count++;
    }
    if (has_digit) {
        classes_count++;
    }
    if (has_special) {
        classes_count++;
    }

    return classes_count >= 3;
}

int main() {
    char password[100];
    printf("Enter your password: ");
    scanf("%s", password);

    if (check_password(password)) {
        printf("Yeasss\n");
    } else {
        printf("Nope\n");
    }

    return 0;
}

///Функция check_password принимает пароль в виде строки и возвращает true, 
//если он удовлетворяет всем ограничениям, и false в противном случае. 
//В функции мы сначала проверяем длину пароля, затем проходимся по всем символам пароля 
//и проверяем, что они удовлетворяют требованиям к символам. 
//Для этого мы используем стандартные функции isascii, isupper, islower, isdigit и проверяем, 
//что код символа находится в нужном диапазоне. Также мы подсчитываем количество классов символов в пароле и возвращаем true, если их количество не меньше трех.

