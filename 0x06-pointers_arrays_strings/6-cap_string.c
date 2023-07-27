#include <stdio.h>

char* string_toupper(char* str) {
    char* ptr = str;

    while (*ptr != '\0') {
        // Check if the current character is a lowercase letter (ASCII range 'a' to 'z')
        if (*ptr >= 'a' && *ptr <= 'z') {
            // Convert the lowercase letter to uppercase by subtracting the ASCII difference ('a' - 'A')
            *ptr = *ptr - ('a' - 'A');
        }
        ptr++;
    }

    return str;
}

int main() {
    char str[] = "Hello, world!";

    printf("Before: %s\n", str);
    string_toupper(str);
    printf("After:  %s\n", str);

    return 0;
}

