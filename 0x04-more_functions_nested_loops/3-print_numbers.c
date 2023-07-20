#include <stdio.h>

void _putchar(char c) {
    putchar(c);
}

void print_numbers(void) {
    char num;
    for (num = '0'; num <= '9'; num++) {
        _putchar(num);
    }
    _putchar('\n');
}

