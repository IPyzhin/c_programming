#include <stdio.h>

main() {
    int n1, n2;
    printf("Enter the first number:");
    scanf("%d", &n1);
    printf("Enter the second number:");
    scanf("%d", &n2);

    printf("%d+%d=%d", n1, n2, n1 + n2);
    printf("\n%d-%d=%d", n1, n2, n1 - n2);
    printf("\n%d*%d=%d", n1, n2, n1 * n2);
}