#include <stdio.h>

#define MAX_MESSAGE_LENGTH 100

int main(void) {
    char message[MAX_MESSAGE_LENGTH];

    char *currentPosition = message;
    int inputCharacter;

    printf("Enter a message: ");

    while (currentPosition < message + MAX_MESSAGE_LENGTH && (inputCharacter = getchar()) != '\n' && inputCharacter != EOF) {
        *currentPosition = (char) inputCharacter;
        currentPosition++;
    }

    printf("Reversal is: ");

    while (currentPosition > message) {
        currentPosition--;
        putchar(*currentPosition);
    }

    putchar('\n');

    return 0;
}
