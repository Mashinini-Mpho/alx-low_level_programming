#include <stdio.h>

char* _strncat(char* dest, char* src, int n) {
    char* dest_ptr = dest;
    
    // Move dest_ptr to the end of the destination string
    while (*dest_ptr != '\0') {
        dest_ptr++;
    }

    // Copy at most n characters from src to the end of dest
    while (n > 0 && *src != '\0') {
        *dest_ptr = *src;
        dest_ptr++;
        src++;
        n--;
    }

    // Add a terminating null byte at the end of the concatenated string
    *dest_ptr = '\0';

    return dest;
}

int main() {
    char dest[50] = "Hello, ";
    char src[] = "world!";

    printf("Before concatenation: %s\n", dest);
    _strncat(dest, src, 6); // Concatenate at most 6 characters from src
    printf("After concatenation: %s\n", dest);

    return 0;
}

