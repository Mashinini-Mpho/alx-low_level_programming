#include <stdio.h>

char* _strncpy(char* dest, char* src, int n) {
    char* dest_ptr = dest;
    
    // Copy at most n characters from src to dest
    while (n > 0 && *src != '\0') {
        *dest_ptr = *src;
        dest_ptr++;
        src++;
        n--;
    }

    // Fill the remaining characters in dest with null bytes
    while (n > 0) {
        *dest_ptr = '\0';
        dest_ptr++;
        n--;
    }

    return dest;
}

int main() {
    char dest[50];
    char src[] = "Hello, world!";

    printf("Before copying: %s\n", dest);
    _strncpy(dest, src, 5); // Copy at most 5 characters from src
    printf("After copying: %s\n", dest);

    return 0;
}

