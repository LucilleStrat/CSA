#include <stdio.h>

int main(void) {
    int grade, tens;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100) {
        printf("Error: grade must be between 0 and 100\n");
        return 0;
    }

    tens = grade / 10;
    printf("Letter grade: ");

    switch (tens) {
        case 10:
        case 9:  printf("A\n"); break;
        case 8:  printf("B\n"); break;
        case 7:  printf("C\n"); break;
        case 6:  printf("D\n"); break;
        default: printf("F\n"); break;
    }

    return 0;
}
