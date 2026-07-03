#include <stdio.h> 

int sum(int n1, int n2); 
int dif(int n1, int n2); 
int prod(int n1, int n2); 

void main(void) 
{ 
  int choice, num1, num2; 
  do{ 

    printf("1: sum of two numbers\n");
    printf("2: difference of two numbers\n");
    printf("3: product of two numbers\n");  
    printf("<0: terminate the program\n"); 
    printf("Select calculation:"); 
    scanf("%d", &choice); 
    if(choice < 0) { 
      printf("Terminating the program..."); 
    } 
    else if(choice == 1) {
      printf("Enter the first number:");
      scanf("%d", &num1);
      printf("Enter the second number:");
      scanf("%d", &num2);     
      printf("%d + %d = %d\n", num1, num2, sum(num1, num2));
    } 
    else if(choice == 2) {
        printf("Enter the first number:");
        scanf("%d", &num1);
        printf("Enter the second number:");
        scanf("%d", &num2);     
        printf("%d - %d = %d\n", num1, num2, dif(num1, num2));
    } 
    else if(choice == 3) {
        printf("Enter the first number:");
        scanf("%d", &num1);
        printf("Enter the second number:");
        scanf("%d", &num2);   
        printf("%d * %d = %d\n", num1, num2, prod(num1, num2));
    } 
    else { 
      printf("You entered an invalid number.\n\n"); 
    } 
  }while(choice>0); 
} 

int sum(int num1, int num2) {
    return num1 + num2;
} 

int dif(int num1, int num2) {
    return num1 - num2;
} 

int prod(int num1, int num2) {
    return num1 * num2;
} 