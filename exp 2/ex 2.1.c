#include <stdio.h>

int main() {
    char char1, char2;

    printf("Enter two characters with spaces or newlines in between: ");

    // Read the characters from the input
    while (1) {
        char c = getchar();
        if (c != ' ' && c != '\n') {
            char1 = c;
            break;
        }
    }

    // Read the next character, ignoring spaces and newlines
    while (1) {
        char c = getchar();
        if (c != ' ' && c != '\n') {
            char2 = c;
            break;
        }
    }

    // Print the characters
    printf("Character 1: %c\n", char1);
    printf("Character 2: %c\n", char2);

    return 0;
}
