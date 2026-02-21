#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *msg_input;
    char *msg_err_input;
    char *msg_err_positive;
    char *msg_header;
    char *msg_final;

    if (argc > 1 && strcmp(argv[1], "--en") == 0) {
        msg_input = "Enter a positive number n: ";
        msg_err_input = "Input error! Please enter an integer.\n";
        msg_err_positive = "Error: Collatz conjecture is only defined for positive numbers!\n";
        msg_header = "Sequence for %lld:\n";
        msg_final = "\nSequence completed in %d steps.\n";
    } else if (argc > 1 && strcmp(argv[1], "--ru") == 0) {
        msg_input = "Введите положительное число n: ";
        msg_err_input = "Ошибка ввода! Пожалуйста, введите целое число.\n";
        msg_err_positive = "Ошибка: Гипотеза Коллатца определена только для положительных чисел!\n";
        msg_header = "Последовательность для %lld:\n";
        msg_final = "\nПоследовательность завершена за %d шагов.\n";
      } else {
        msg_input = "Enter a positive number n: ";
        msg_err_input = "Input error! Please enter an integer.\n";
        msg_err_positive = "Error: Collatz conjecture is only defined for positive numbers!\n";
        msg_header = "Sequence for %lld:\n";
        msg_final = "\nSequence completed in %d steps.\n";
      }

    long long n;
    
    printf(msg_input);
    
    if (scanf("%lld", &n) != 1) {
        printf(msg_err_input);
        return 1;
    }

    if (n <= 0) {
        printf(msg_err_positive);
    } else {
        int count = 0;
        printf(msg_header, n);

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

        printf(msg_final, count);
    }

    return 0;
}