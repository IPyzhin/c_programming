#include <stdio.h>

int main(void) {
    int first, second, sum;
    printf("Enter first number: ");
    scanf("%d", &first);

    printf("Enter second number: ");
    scanf("%d", &second);

    sum = first + second;
    printf("The sum of number enteres is: %d", sum);
}