#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char message[256];
    char cleanedMessage[256];
    char reversedMessage[256];

    int cleanedLength = 0;

    printf("Enter message: ");
    fgets(message, sizeof(message), stdin);

    for (int i = 0; message[i] != '\0'; i++) {
        if (isalpha((unsigned char) message[i])) {
            cleanedMessage[cleanedLength] = (char) tolower((unsigned char) message[i]);
            cleanedLength++;
        }
    }

    cleanedMessage[cleanedLength] = '\0';

    for (int i = 0; i < cleanedLength; i++) {
        reversedMessage[i] = cleanedMessage[cleanedLength - 1 - i];
    }

    reversedMessage[cleanedLength] = '\0';

    if (strcmp(cleanedMessage, reversedMessage) == 0) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

    return 0;
}
