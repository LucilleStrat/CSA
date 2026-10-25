#include <stdio.h>
#include <ctype.h>

int main(void) {
    char entered_character;
    int total_score;

    printf("Enter a word: ");

    entered_character = getchar();
    total_score = 0;

    while (entered_character != '\n') {
        entered_character = toupper(entered_character);
        switch (entered_character) {
            case 'A': case 'E': case 'I': case 'L': case 'N':
            case 'O': case 'R': case 'S': case 'T': case 'U':
                total_score += 1; break;
            case 'D': case 'G':
                total_score += 2; break;
            case 'B': case 'C': case 'M': case 'P':
                total_score += 3; break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                total_score += 4; break;
            case 'K':
                total_score += 5; break;
            case 'J': case 'X':
                total_score += 8; break;
            case 'Q': case 'Z':
                total_score += 10; break;
        }
        entered_character = getchar();
    }

    printf("Scrabble value: %d\n", total_score);

    return 0;
}
