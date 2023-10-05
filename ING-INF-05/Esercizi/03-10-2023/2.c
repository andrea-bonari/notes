#include <stdio.h>
#include <math.h>

int main() {
    float angle;
    printf("Inserisci un angolo in gradi: ");
    scanf("%f", &angle);

    printf("L'angolo in radianti equivale a %f", angle * M_PI / 180);

    return 0;
}