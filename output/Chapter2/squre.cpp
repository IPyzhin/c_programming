#include <stdio.h>

int main(void) {
    int n, sqr;
    printf("Enter an integer: ");
    scanf("%d", &n);

    sqr = n * n;
    printf("The square of the number you entered is %d", sqr);
}