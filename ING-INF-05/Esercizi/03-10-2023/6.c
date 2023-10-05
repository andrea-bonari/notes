#include <stdlib.h>

int main() {
    float degrees_in_celsius, degrees_in_fahrenheit;
    
    printf("Inserisci la temperatura in gradi celsius");
    scanf("%f", &degrees_in_celsius);

    degrees_in_fahrenheit = degrees_in_celsius * 9/5 + 32;

    printf("La temperatura in fahrenheit è %f", degrees_in_fahrenheit);

    return 0;
}