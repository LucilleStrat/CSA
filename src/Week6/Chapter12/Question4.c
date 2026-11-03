#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_palindrome(char *message) {
    char *rightPosition = message + strlen(message);

    while (message < rightPosition) {
        while (message < rightPosition && !isalpha((unsigned char) *message)) {
            message++;
        }

        while (message < rightPosition && !isalpha((unsigned char) *(rightPosition - 1))) {
            rightPosition--;
        }

        if (message < rightPosition) {
            if (tolower((unsigned char) *message) != tolower((unsigned char) *(rightPosition - 1))) {
                return 0;
            }

            message++;
            rightPosition--;
        }
    }

    return 1;
}

int main(void) {
    char message[256];

    printf("Enter message: ");
    fgets(message, sizeof(message), stdin);

    if (is_palindrome(message)) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

    return 0;
}
