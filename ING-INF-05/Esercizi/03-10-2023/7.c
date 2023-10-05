#include <stdlib.h>

int main() {
    float height, ideal_weight;
    int age;

    printf("Inserisci un altezza (cm): ");
    scanf("%f", &height);

    printf("Inserisci un eta: ");
    scanf("%d", &age);

    if(age <= 0 || height <= 0) {
        printf("Errore: valori incorretti");
        return 1;
    }

    ideal_weight = (height - 100 + age / 10) * 0.9;

    printf("Il peso ideale è %f", ideal_weight);

    return 0;
}