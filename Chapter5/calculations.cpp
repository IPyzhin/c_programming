#include <stdio.h>

int main(void) {
    int calc, num1, num2, sub, add, mult;
    printf("1: subtraction\n2: addition\n3: multiplication");
    printf("\nSelect function:");
    scanf("%d", &calc);
    switch (calc) {
        case 1:
            printf("Enter the first number:");
            scanf("%d", &num1); 
            printf("Enter the second number:");
            scanf("%d", &num2);
            sub = num1 - num2;
            printf("%d-%d=%d", num1, num2, sub);
            break;
        case 2:
            printf("Enter the first number:");
            scanf("%d", &num1); 
            printf("Enter the second number:");
            scanf("%d", &num2);
            add = num1 + num2;
            printf("%d+%d=%d", num1, num2, add);
            break;
         case 3:
            printf("Enter the first number:");
            scanf("%d", &num1); 
            printf("Enter the second number:");
            scanf("%d", &num2);
            mult = num1 * num2;
            printf("%d*%d=%d", num1, num2, mult);
            break;    
    }
    return 0;
}