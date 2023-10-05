#include <stdio.h>

int main() {
    int num;
    printf("Inserisci un numero: ");

    scanf("%d", &num);

    printf("%d", num % 2);

    return 0;
}