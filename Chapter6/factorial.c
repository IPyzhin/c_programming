#include <stdio.h>

int main(void) {
    int i, n;
    int f = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        f = f * i;
    }
    printf("The factorial of %d is %d", n, f);
    return 0;
}