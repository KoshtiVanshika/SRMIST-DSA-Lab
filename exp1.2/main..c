#include <stdio.h>

int main() {
    int packedChars = 0; 

    
    packedChars |= 'A';
    packedChars |= ('B' << 8);
    packedChars |= ('C' << 16);
    packedChars |= ('D' << 24);

    printf("Packed integer value: %d\n", packedChars);

    
    int addValue = 1;
    packedChars += (addValue << 24) | (addValue << 16) | (addValue << 8) | addValue;

    
    for (int i = 0; i < 4; ++i) {
        char currentChar = (packedChars >> (i * 8)) & 0xFF;
        printf("Updated char at position %d: %c\n", i, currentChar);
    }

    return 0;
}
