#include <stdio.h>

int main() {
    int hours, minutes, seconds;
    int total_seconds;

    printf("Введіть години: ");
    scanf("%d", &hours);

    printf("Введіть хвилини: ");
    scanf("%d", &minutes);

    printf("Введіть секунди: ");
    scanf("%d", &seconds);

    // Переводимо все в секунди
    total_seconds = hours * 3600 + minutes * 60 + seconds;

    // Знову рахуємо правильно (на випадок, якщо ввели більше 60 хв або сек)
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    printf("З початку доби пройшло %d годин %d хвилин %d секунд\n", hours, minutes, seconds);

    return 0;
}