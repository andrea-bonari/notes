#include <stdio.h>

#define CONVERSION_RATE 1.18

int main() {
    float euro;

    printf("Inserisci un numero: ");
    scanf("%f", &euro);

    printf("In dollari equivale a %f", euro / CONVERSION_RATE);

    return 0;
}