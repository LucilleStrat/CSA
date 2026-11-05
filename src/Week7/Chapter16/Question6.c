#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

int compare_dates(struct date first_date, struct date second_date) {
    if (first_date.year < second_date.year) {
        return -1;
    }

    if (first_date.year > second_date.year) {
        return 1;
    }

    if (first_date.month < second_date.month) {
        return -1;
    }

    if (first_date.month > second_date.month) {
        return 1;
    }

    if (first_date.day < second_date.day) {
        return -1;
    }

    if (first_date.day > second_date.day) {
        return 1;
    }

    return 0;
}

int main(void) {
    struct date first_date;
    struct date second_date;

    int comparison_result;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &first_date.month, &first_date.day, &first_date.year);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &second_date.month, &second_date.day, &second_date.year);

    comparison_result = compare_dates(first_date, second_date);

    if (comparison_result == -1) {
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", first_date.month, first_date.day, first_date.year, second_date.month, second_date.day, second_date.year);
    } else if (comparison_result == 1) {
        printf("%d/%d/%02d is earlier than %d/%d/%02d\n", second_date.month, second_date.day, second_date.year, first_date.month, first_date.day, first_date.year);
    } else {
        printf("Both dates are the same.\n");
    }

    return 0;
}
