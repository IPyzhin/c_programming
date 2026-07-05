#include <stdio.h>

void main(void) {
    int i, days;
    float working_days[30], sum, average;
    sum = 0;
    printf("The program calculates the total hours worked during\n");
    printf("a specific period and the average length of a day.\n\n");

    printf("How many days:");
    scanf("%d", &days);

    for (i = 0; i < days; i++) {
        printf("Enter the working hours for day %d:", i + 1);
        scanf("%f", &working_days[i]);
        sum += working_days[i];
    }

    average = sum / days;
    printf("\n\nTotal hours worked: %.1f\n", sum);
    printf("Average length of day: %.1f\n", average);
    printf("Hours entered: ");
    for (i = 0; i < days; i++) {
        printf("%.1f ", working_days[i]);
    }
}