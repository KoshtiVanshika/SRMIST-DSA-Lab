#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];

    while (1) {
        printf("Enter two strings with one character in between (or press Enter to exit): ");
        
        // Read the input
        if (scanf("%99s %99s", str1, str2) == 2) {
            printf("String 1: %s\n", str1);
            printf("String 2: %s\n", str2);
        } else {
            printf("Invalid input or no separator found. Exiting...\n");
            break;
        }

        // Consume the character in between (newline or space)
        int c;
        do {
            c = getchar();
        } while (c == ' ' || c == '\n');

        // If it's not the end of the file, unget the character so it can be read next
        if (c != EOF) {
            ungetc(c, stdin);
        }
    }

    return 0;
}
