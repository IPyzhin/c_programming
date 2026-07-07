#include <stdio.h>

int main() {
    int vowel_count = 0;
    int i;
    char phrase[16];

    printf("The program calculates the number of vowels.\n");
    printf("Enter a word:");
    scanf("%15s", &phrase);

    for (i = 0; i < 15; i++) {
        if (phrase[i] == 'a' || phrase[i] == 'e' ||
            phrase[i] == 'i' || phrase[i] == 'o' ||
            phrase[i] == 'u' || phrase[i] == 'y') {
            vowel_count++;
        }
    }

    printf("The word contains %d vowels\n", vowel_count);

    return 0;
}