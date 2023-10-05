#include <stdio.h>

#define DAYS_IN_YEAR 365
#define DAYS_IN_WEEK 7

int main() {
    int days, years, weeks;

    printf("Inserisci il numero di giorni: ");
    scanf("%d", &days);

    if(days <= 0) {
        printf("Errore: valori incorretti");
        return 1;
    }

    years = days / DAYS_IN_YEAR;
    days = days % DAYS_IN_YEAR;

    weeks = days / DAYS_IN_WEEK;
    days = days % DAYS_IN_WEEK;

    printf("%d anni/o, %d settimane/a, %d giorni/o", years, weeks, days);

    return 0;
}