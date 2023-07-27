#include <stdio.h>

char* _strcat(char* dest, char* src) {
    char* dest_ptr = dest;
    
    // Move dest_ptr to the end of the destination string
    while (*dest_ptr != '\0') {
        dest_ptr++;
    }

    // Copy characters from src to the end of dest
    while (*src != '\0') {
        *dest_ptr = *src;
        dest_ptr++;
        src++;
    }

    // Add a terminating null byte at the end of the concatenated string
    *dest_ptr = '\0';

    return dest;
}

int main() {
    char dest[50] = "Hello, ";
    char src[] = "world!";

    printf("Before concatenation: %s\n", dest);
    _strcat(dest, src);
    printf("After concatenation: %s\n", dest);

    return 0;
}

