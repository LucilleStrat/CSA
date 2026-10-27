#include <stdio.h>

#define INITIAL_BALANCE 100.00

int main(void) {
    int i, low_rate, num_years, year, month;
    double interest_rates[] = {6, 7, 8, 9, 10};

    int num_rates = sizeof(interest_rates) / sizeof(interest_rates[0]);
    double value[5][num_rates];

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);

    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nYear");

    for (i = 0; i < num_rates; i++)
        printf("%6d", low_rate + i);

    printf("\n");

    for (i = 0; i < num_rates; i++)
        value[0][i] = INITIAL_BALANCE;

    for (year = 1; year < num_years; year++)
        for (i = 0; i < num_rates; i++) {
            double monthly_balance = value[year - 1][i];
            for (month = 0; month < 12; month++)
                monthly_balance *= (1.0 + (low_rate + i) / 1200.0);
            value[year][i] = monthly_balance;
        }

    for (year = 0; year < num_years; year++) {
        printf("%4d ", year + 1);

        for (i = 0; i < num_rates; i++)
            printf("%8.2f", value[year][i]);

        printf("\n");
    }

    return 0;
}
