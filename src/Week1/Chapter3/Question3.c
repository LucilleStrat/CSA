#include <stdio.h>
#include <string.h>

int main() {
    char isbn[20];
    printf("Enter ISBN: ");

    scanf("%19s", isbn);
    char *parts[5];

    parts[0] = strtok(isbn, "-");
    parts[1] = strtok(NULL, "-");
    parts[2] = strtok(NULL, "-");
    parts[3] = strtok(NULL, "-");
    parts[4] = strtok(NULL, "-");

    printf("GS1 prefix: %s\n", parts[0]);
    printf("Group identifier: %s\n", parts[1]);
    printf("Publisher code: %s\n", parts[2]);
    printf("Item number: %s\n", parts[3]);
    printf("Check digit: %s\n", parts[4]);

    return 0;
}
