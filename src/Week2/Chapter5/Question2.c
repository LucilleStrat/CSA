#include <stdio.h>

int main(void) {
    int hours, mins;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &mins);

    if (hours == 0 || hours == 12)
        printf("Equivalent 12-hour time: 12:%02d %s\n", mins, hours == 0 ? "AM" : "PM");
    else if (hours < 12)
        printf("Equivalent 12-hour time: %d:%02d AM\n", hours, mins);
    else
        printf("Equivalent 12-hour time: %d:%02d PM\n", hours - 12, mins);

    return 0;
}
