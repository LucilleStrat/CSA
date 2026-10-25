#include <stdio.h>

int compute_gcd(int first, int second) {
    int remainder;

    while (second != 0) {
        remainder = first % second;
        first = second;
        second = remainder;
    }

    return first;
}

int main(void) {
    int numerator, denominator, divisor;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    divisor = compute_gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;

    printf("In lowest terms: %d/%d\n", numerator, denominator);

    return 0;
}
