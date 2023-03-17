#include <stdio.h>

/*
 * Scrivere un programma che chieda un valore double e lo visualizzi con le 3
 * specifiche di conversione %f, %e e %g.
 */

int main() {
    double num;
    printf("Inserisci il numero: ");
    scanf("%lf", &num);
    printf("\nNumero in conversione %%f: %f", num);
    printf("\nNumero in conversione %%e: %e", num);
    printf("\nNumero in conversione %%g: %g", num);
    return 0;
}
