#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_palindrome(char *message) {
    char *left = message;
    char *right = message + strlen(message);

    while (left < right) {
        while (left < right && !isalpha((unsigned char)*left)) {
            left++;
        }

        while (left < right && !isalpha((unsigned char)*(right - 1))) {
            right--;
        }

        if (left < right) {
            if (tolower((unsigned char)*left) !=
                tolower((unsigned char)*(right - 1))) {
                return 0;
            }

            left++;
            right--;
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
