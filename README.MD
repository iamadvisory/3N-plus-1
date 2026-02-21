# 3N+1 Visualizer

Простая программа на C для визуализации гипотезы Коллатца.
A simple C program to visualize the Collatz conjecture.

# Launch & Languages / Запуск и языки

По умолчанию программа запускается на английском языке. Вы можете выбрать язык с помощью флагов командной строки:
By default, the program starts in English. You can select the language using command-line flags:

    Russian: ./3N+1 --ru

    English: ./3N+1 --en 

# Visualization / График

    Russian: Синими знаками '*' обозначаются четные числа, красными — нечетные.

    English: Even numbers are represented by blue '*' symbols, while odd numbers are shown in red.

# Build / Сборка

Вы можете найти готовые файлы в releases или скомпилировать исходный код самостоятельно:
You can find pre-built binaries in the releases or compile the source code yourself:

gcc scr/main.c -o 3N+1
