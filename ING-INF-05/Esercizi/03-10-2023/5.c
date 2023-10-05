#include <stdio.h>

int main() {
    float price;
    int discount;

    printf("Inserisci il prezzo del prodotto: ");
    scanf("%f", &price);

    printf("Inserisci lo sconto del prodotto: ");
    scanf("%d", &discount);

    if(discount >= 100 || discount <= 0 || price <= 0) {
        printf("Errore: valori incorretti");
        return 1;
    }

    float discounted_price = price - price * discount / 100;

    printf("Il prezzo scontato è %f", discounted_price);

    return 0;
}