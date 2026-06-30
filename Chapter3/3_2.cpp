#include <stdio.h>

main() {
    float fim, eur;
    float convertion_rate = 5.94573;
    printf("Enter an amount in FIM:");
    scanf("%f", &fim);

    eur = fim / convertion_rate;

    printf("FIM converted to euro: %.2f", eur);
}