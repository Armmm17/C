#include <stdio.h>

/*
 * Scrivere un programma che chieda un valore double di temperatura in gradi
 * Fahrenheit e calcoli i valori delle corrispondenti temperature in gradi Celsius e
 * Kelvin (entrambi con parte frazionaria).
 */

int main() {
    double tempF, tempC, tempK;
    printf("Inserisi la temperatura: ");
    scanf("%lf", &tempF);
    tempC = (5.0/9.0)*(tempF-32.0);
    tempK = tempC + 273.15;
    printf("\nTemperatura in gradi Fahrenheit: %.02f", tempF);
    printf("\nTemperatura in gradi Celsius: %.02f", tempC);
    printf("\nTemperatura in gradi Kelvin: %.02f", tempK);


    return 0;
}
