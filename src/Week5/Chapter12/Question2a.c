#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_palindrome(char message[]) {
    int left = 0;
    int right = strlen(message);

    while (left < right) {
        while (left < right && !isalpha((unsigned char)message[left])) {
            left++;
        }

        while (left < right && !isalpha((unsigned char)message[right - 1])) {
            right--;
        }

        if (left < right) {
            if (tolower((unsigned char)message[left]) !=
                tolower((unsigned char)message[right - 1])) {
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
