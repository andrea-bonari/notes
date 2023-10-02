#include <stdio.h>
#include <math.h>

int main() {
    int raggio;
    float area, circonferenza;

    printf("Inserisci il raggio: ");
    scanf("%d", &raggio);

    circonferenza = 2 * M_PI * raggio;
    area = raggio * raggio * M_PI;

    printf("L'area è %f, mentre la circonferenza è %f", area, circonferenza);

    return 0;
}
