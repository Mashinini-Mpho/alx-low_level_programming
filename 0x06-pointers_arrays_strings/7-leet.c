#include <stdio.h>

char* leet(char* str) {
    char* ptr = str;
    char leetMap[256] = {0};

    // Initialize the Leet Speak mapping for characters
    leetMap['a'] = leetMap['A'] = '4';
    leetMap['e'] = leetMap['E'] = '3';
    leetMap['o'] = leetMap['O'] = '0';
    leetMap['t'] = leetMap['T'] = '7';
    leetMap['l'] = leetMap['L'] = '1';

    while (*ptr != '\0') {
        // Check if the character exists in the mapping
        if (leetMap[*ptr] != 0) {
            // Replace the character with its Leet Speak equivalent
            *ptr = leetMap[*ptr];
        }
        ptr++;
    }

    return str;
}

int main() {
    char str[] = "Leet Speak";

    printf("Original: %s\n", str);
    leet(str);
    printf("1337:    %s\n", str);

    return 0;
}

