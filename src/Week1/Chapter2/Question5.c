#include <stdio.h>

int main() {
    float x;

    printf("Enter a value for x: ");
    scanf("%f", &x);

    float x2 = x * x;
    float x3 = x2 * x;
    float x4 = x3 * x;
    float x5 = x4 * x;

    float result = 3.0f * x5 + 2.0f * x4 - 5.0f * x3 - x2 + 7.0f * x - 6.0f;
    printf("Result: %f\n", result);

    return 0;
}
