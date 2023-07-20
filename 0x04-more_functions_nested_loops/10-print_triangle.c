#include <stdio.h>

void _putchar(char c) {
    putchar(c);
}

void print_triangle(int size) {
    if (size <= 0) {
        _putchar('\n');
    } else {
        int i, j;
        for (i = 1; i <= size; i++) {
            for (j = 0; j < i; j++) {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
}
