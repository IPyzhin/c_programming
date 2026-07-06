#include <stdio.h>

int main() {
    int numbers[4], sum = 0, i;

    FILE *read_file = fopen("C:\\Users\\demon\\Desktop\\c_programming\\Chapter9\\numbers.s", "r");

    if (read_file == NULL) {
        printf("Failed to open file (numbers.s).\n");
        return 0;
    }

    for (i = 0; i < 4; i++) {
        fscanf(read_file, "%d", &numbers[i]);
        sum += numbers[i];
    }

    fclose(read_file);

    printf("Numbers found in the file numbers.s:\n");
    printf("%d, %d, %d and %d\n\n",
           numbers[0], numbers[1], numbers[2], numbers[3]);

    printf("Sum of the numbers: %d\n", sum);

    return 0;
}