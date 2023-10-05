#include <stdio.h>

int main() {
    int birth_year, current_year;

    printf("Inserisci l'anno di nascita: ");
    scanf("%d", &birth_year);

    printf("Inserisci l'anno corrente: ");
    scanf("%d", &current_year);

    printf("L'età attuale è %d", current_year - birth_year);
    return 0;
}