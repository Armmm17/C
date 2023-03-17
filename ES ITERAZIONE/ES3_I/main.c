/*
Scrivere un programma che calcoli la media di tutti i valori introdotti dalla
tastiera finché non ne viene introdotto uno non compreso tra 18 e 30, ad
esempio 9999 (provare proprio questo valore!). La visualizzazione della
media deve avvenire solo alla fine (ossia non ogni volta che un valore viene
introdotto).
*/

#include <stdio.h>

int main() {
	
    int valore, somma = 0, j = 0;
    float media;

    printf("Inserisci un numero compreso tra 18 e 30:\n");
    while (1) {
        scanf("%d", &valore);
        if (valore == 9999 || valore < 18 || valore > 30) {
            break;
        }
        somma += valore;
        j++;
    }

    if (j > 0) {
        media = (float) somma / j;
        printf("La media dei numeri inseriti è: %.2f\n", media);
    } else {
        printf("Nessun numero inserito.\n");
    }

    return 0;
}
