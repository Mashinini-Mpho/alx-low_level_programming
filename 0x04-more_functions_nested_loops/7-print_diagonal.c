#include <stdio.h>

void _putchar(char c) {
    putchar(c);
}

void print_diagonal(int n) {
    if (n <= 0) {
        _putchar('\n');
    } else {
        int spaces = 0;
        while (spaces < n) {
            int i;
            for (i = 0; i < spaces; i++) {
                _putchar(' ');
            }
            _putchar('\\');
            _putchar('\n');
            spaces++;
        }
    }
}

