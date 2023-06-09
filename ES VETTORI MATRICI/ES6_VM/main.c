/*
Scrivere un programma che acquisisca da tastiera un vettore di (max 100)
valori di tipo intero e identifichi la pi� lunga sequenza di numeri consecutivi
uguali. Se vengono identificate pi� sequenze della stessa lunghezza, si
consideri solo la prima identificata. Il programma deve indicare il valore
ripetuto e il numero di ripetizioni di quel valore.
*/

#include <stdio.h>

int main() {
    int vectorLen, i, count = 1, maxCount = 1, maxValue;


    /*
   
    // Acquisizione del vettore
    printf("Inserisci la dimensione del vettore (max 100): ");
    scanf("%d", &vectorLen);
    int vector[vectorLen];
    
    printf("Inserisci i valori del vettore:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    
    */
    
    // TEST esempio
    int vector[] = {19, 3, 15, 15, 7, 9, 9, 9, 9, 12, 3, 3, 3};
    vectorLen = 13;

    // Identificazione della sequenza pi� lunga di numeri consecutivi uguali
    for (i = 0; i < vectorLen; i++) {
        if (vector[i] == vector[i-1]) {
            count++;
        } else {
            if (count > maxCount) {
                maxCount = count;
                maxValue = vector[i-1];
            }
            count = 1;
        }
    }

    // Stampa dei risultati
    if (maxCount == 1) {
        printf("Non ci sono sequenze di numeri consecutivi uguali.\n");
    } else {
        printf("Numero: %d \nRipetizioni: %d.\n", maxValue, maxCount);
    }

    return 0;
}

