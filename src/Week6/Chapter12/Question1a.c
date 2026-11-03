#include <stdio.h>

#define MAX_MESSAGE_LENGTH 100

int main(void) {
    char message[MAX_MESSAGE_LENGTH];

    int inputCharacter;
    int messageLength = 0;

    printf("Enter a message: ");

    while (messageLength < MAX_MESSAGE_LENGTH && (inputCharacter = getchar()) != '\n' && inputCharacter != EOF) {
        message[messageLength] = (char) inputCharacter;
        messageLength++;
    }

    printf("Reversal is: ");

    while (messageLength > 0) {
        messageLength--;
        putchar(message[messageLength]);
    }

    putchar('\n');

    return 0;
}
