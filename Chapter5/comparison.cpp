#include <stdio.h>

int main() {
    char drink;
    int cups;
    printf("Do you drink coffee or tea (c/t)?");
    scanf("%c", &drink);
    if (drink == 'c'){
        printf("How many cups do you drink daily:");
        scanf("%d", &cups);
        if (cups <= 2) {
            printf("You don't drink a lot of coffee, do you?");
        }
        else if (cups >= 3 && cups <=20) {
            printf("You drink a lot of coffee!");
        }
        else {
            printf("An error occurred in the program!");
        }
    }    
    else if (drink == 't') {
        printf("How many cups do you drink daily:");
        scanf("%d", &cups);
        if (cups <= 2) {
            printf("You do not drink a lot of tea.");
        }
        else if (cups >= 3 && cups <=20) {
            printf("You drink a lot of tea!");
        }
        else {
            printf("An error occurred in the program!");
        }
    }
    else {
        printf("How many cups do you drink daily:");
        scanf("%d", &cups);
        printf("An error occurred in the program!");       
    }
    return 0;
}