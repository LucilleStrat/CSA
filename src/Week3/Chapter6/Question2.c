#include <stdio.h>

int main(void) {
    int first_number, second_number, remainder, gcd_result;

    printf("Enter two integers: ");
    scanf("%d %d", &first_number, &second_number);

    while (second_number != 0) {
        remainder = first_number % second_number;
        first_number = second_number;
        second_number = remainder;
    }

    gcd_result = first_number;

    printf("Greatest common divisor: %d\n", gcd_result);

    return 0;
}
