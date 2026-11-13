

#include <stdio.h> //28

int main(void) {
    int choice;
    double mass;
    double volume;
    double density;

    while (1) {
        printf("\n\tкалькулятор плотности\t\n");
        printf("1. Найти плотность:\n");
        printf("2. Найти массу:\n");
        printf("3. Найти объем:\n");
        printf("4. Найти удельный объем:\n");
        printf("5. Выход:\n");
        printf("Выберите пункт: ");

        if (scanf("%d", &choice) != 1) {
            printf("Ошибка ввода. Завершение программы\n");
            break;
        }

        if (choice < 1 || choice > 5) {
            printf("Ошибка. Неправильный номер пункта\n");
            continue;
        }

        switch (choice) {

        case 1:
            printf("Введите массу: ");
            if (scanf("%lf", &mass) != 1) {
                printf("Ошибка ввода. Завершение программы\n");
                return 0;
            }

            printf("Введите объем: ");
            if (scanf("%lf", &volume) != 1) {
                printf("Ошибка ввода. Завершение программы\n");
                return 0;
            }

            if (volume <= 0) {
                printf("Ошибка. Объем должен быть больше 0.\n");
            }
            else {
                density = mass / volume;
                printf("Плотность: %.2f\n", density);
            }
            break;

        case 2:
            printf("Введите плотность: ");
            if (scanf("%lf", &density) != 1) {
                printf("Ошибка ввода. Завершение программы\n");
                return 0;
            }

            printf("Введите объем: ");
            if (scanf("%lf", &volume) != 1) {
                printf("Ошибка ввода. Завершение программы\n");
                return 0;
            }

            mass = density * volume;
            printf("Масса: %.2f\n", mass);
            break;

        case 3:
            printf("Введите массу: ");
            if (scanf("%lf", &mass) != 1) {
                printf("Ошибка ввода. Завершение программы\n");
                return 0;
            }

            printf("Введите плотность: ");
            if (scanf("%lf", &density) != 1) {
                printf("Ошибка ввода. Завершение программы\n");
                return 0;
            }

            if (density <= 0) {
                printf("Ошибка. Плотность должна быть больше 0.\n");
            }
            else {
                volume = mass / density;
                printf("Объем: %.2f\n", volume);
            }
            break;

        case 4:
            printf("Введите объем: ");
            if (scanf("%lf", &volume) != 1) {
                printf("Ошибка ввода. Завершение программы\n");
                return 0;
            }

            printf("Введите массу: ");
            if (scanf("%lf", &mass) != 1) {
                printf("Ошибка ввода. Завершение программы\n");
                return 0;
            }

            if (mass <= 0) {
                printf("Ошибка. Масса должна быть больше 0.\n");
            }
            else {
                printf("Удельный объем: %.2f\n", volume / mass);
            }
            break;

        case 5:
            printf("Выход из программы\n");
            return 0;
        }
    }

    return 0;
}