#include <stdio.h>

int main(void) {
    int grade, counter = 0, sum = 0;
    float average;
    printf("The program calculates the average of scores you enter.\n");
    printf("End with a negative integer.\n");
    do {
        printf("Enter score (4-10):");
        scanf("%d", &grade);
        if (grade < 0) {
            break;
        }
        else {
            counter++;
            sum += grade;
        }
    } while (grade > 0);
    if (counter > 0) {
        average = (float)sum / counter;
    }
    
    printf("You entered %d scores.\n", counter);
    printf("Average score: %.2f\n", average);
    return 0;
}