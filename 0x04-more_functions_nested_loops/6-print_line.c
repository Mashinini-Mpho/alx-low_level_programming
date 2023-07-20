#include <stdio.h>

void _putchar(char c) {
    putchar(c);
}

void print_line(int n) {
    if (n <= 0) {
        _putchar('\n');
    } else {
        while (n > 0) {
            _putchar('_');
            n--;
        }
        _putchar('\n');
    }
}

