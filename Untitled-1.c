#include <stdio.h>

int main() {
    // Вхідні дані
    int n = 3680;

    // Розрахунок годин, хвилин та секунд
    int hours = n / 3600;
    int minutes = (n % 3600) / 60;
    int seconds = n % 60;

    // Виведення результату
    printf("З початку доби пройшло %d годин %d хвилин %d секунд\n", hours, minutes, seconds);

    return 0;
}