#include <stdio.h>

int main() {
    long long n;
    
    printf("Введите положительное число n: ");
    
    if (scanf("%lld", &n) != 1) {
        printf("Ошибка ввода! Пожалуйста, введите целое число.\n");
        return 1;
    }

    if (n <= 0) {
        printf("Ошибка: Гипотеза Коллатца определена только для положительных чисел!\n");
    } else {
        int count = 0;
        printf("Последовательность для %lld:\n", n);

        while (n != 1) {
            int even = n % 2 == 0;

            if (even) {
                n = n / 2;
                printf("\033[1;34m%10lld\033[0m | ", n);
            } else {
                n = n * 3 + 1;
                printf("\033[1;31m%10lld\033[0m | ", n);
            }

            if (even) printf("\033[1;34m"); else printf("\033[1;31m");

            for (int i = 0; i < n && i < 80; i++) {
                printf("*");
            }
    
            if (n > 80) printf("...");

            printf("\033[0m\n");
            count++;
        }

        printf("\nПоследовательность завершена за %d шагов.\n", count);
    }

    return 0;
}