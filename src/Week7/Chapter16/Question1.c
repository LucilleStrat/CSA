#include <stdio.h>
#include <stddef.h>

struct dialing_code {
    const char *country;
    int code;
};

const struct dialing_code country_codes[] = {
    { "Argentina", 54 },
    { "Bangladesh", 880 },
    { "Brazil", 55 },
    { "Burma (Myanmar)", 95 },
    { "China", 86 },
    { "Colombia", 57 },
    { "Congo, Dem. Rep. of", 243 },
    { "Egypt", 20 },
    { "Ethiopia", 251 },
    { "France", 33 },
    { "Germany", 49 },
    { "India", 91 },
    { "Indonesia", 62 },
    { "Iran", 98 },
    { "Italy", 39 },
    { "Japan", 81 },
    { "Mexico", 52 },
    { "Nigeria", 234 },
    { "Pakistan", 92 },
    { "Philippines", 63 },
    { "Poland", 48 },
    { "Russia", 7 },
    { "South Africa", 27 },
    { "South Korea", 82 },
    { "Spain", 34 },
    { "Sudan", 249 },
    { "Thailand", 66 },
    { "Turkey", 90 },
    { "Ukraine", 380 },
    { "United Kingdom", 44 },
    { "United States", 1 },
    { "Vietnam", 8 }
};

int main(void) {
    int entered_dialing_code;
    size_t country_index;

    int country_found = 0;
    printf("Enter an international dialing code: ");

    if (scanf("%d", &entered_dialing_code) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    for (country_index = 0; country_index < sizeof(country_codes) / sizeof(country_codes[0]); country_index++) {
        if (country_codes[country_index].code == entered_dialing_code) {
            printf("Country: %s\n", country_codes[country_index].country);
            country_found = 1;
            break;
        }
    }

    if (!country_found) {
        printf("Error: Dialing code not found.\n");
    }

    return 0;
}
