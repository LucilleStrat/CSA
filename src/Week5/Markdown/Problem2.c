#include <stdio.h>

void minMax(int *arr, int n, int *min, int *max) {
    *min = *arr;
    *max = *arr;

    for (int i = 1; i < n; i++) {
        int current = *(arr + i);

        if (current < *min) {
            *min = current;
        }

        if (current > *max) {
            *max = current;
        }
    }
}

int main(void) {
    int data[5] = {4, -2, 9, 0, 7};
    int lo, hi;

    minMax(data, 5, &lo, &hi);

    printf("min = %d, max = %d\n", lo, hi);

    return 0;
}
