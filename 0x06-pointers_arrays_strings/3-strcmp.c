#include <stdio.h>

int _strcmp(char* s1, char* s2) {
    while (*s1 != '\0' && *s2 != '\0') {
        if (*s1 < *s2) {
            return -1;
        } else if (*s1 > *s2) {
            return 1;
        }
        // Move to the next character in both strings
        s1++;
        s2++;
    }

    // Check the case when one string is shorter than the other
    if (*s1 == '\0' && *s2 != '\0') {
        return -1;
    } else if (*s1 != '\0' && *s2 == '\0') {
        return 1;
    }

    // If both strings are equal, return 0
    return 0;
}

int main() {
    char str1[] = "Hello";
    char str2[] = "World";

    int result = _strcmp(str1, str2);
    if (result < 0) {
        printf("str1 is less than str2\n");
    } else if (result > 0) {
        printf("str1 is greater than str2\n");
    } else {
        printf("str1 is equal to str2\n");
    }

    return 0;
}

