#include <stdio.h>

void reverseArray(int *arr, int n) {
    int *left = arr;
    int *right = arr + n - 1;

    while (left < right) {
        int temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
}

int main(void) {
    int data[6] = {1, 2, 3, 4, 5, 6};

    reverseArray(data, 6);

    for (int i = 0; i < 6; i++) {
        printf("%d ", data[i]);
    }

    printf("\n");

    return 0;
}
