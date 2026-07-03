#include <stdio.h>

int smallest(int n1, int n2, int n3);
int largest(int n1, int n2, int n3);

void main(void) {

    int num1, num2, num3, small, large;

    printf("Enter the 1. number:");
    scanf("%d", &num1);
    printf("Enter the 2. number:");
    scanf("%d", &num2);
    printf("Enter the 3. number:");
    scanf("%d", &num3);
    small = smallest(num1, num2, num3);
    large = largest(num1, num2, num3);
    printf("Among the numbers you entered,\n");
    printf("the largest was %d and the smallest was %d.\n", large, small);
}

int smallest(int num1, int num2, int num3) {
    if ((num1 < num2) && (num1 < num3)) {
        return num1;
    }
    else if ((num2 < num1) && (num2 < num3)) {
        return num2;
    }
    else {
        return num3;
    }
}
int largest(int num1, int num2, int num3) {
    if ((num1 > num2) && (num1 > num3)) {
        return num1;
    }
    else if ((num2 > num1) && (num2 > num3)) {
        return num2;
    }
    else {
        return num3;
    }
}