#include <stdio.h>
/*
 * Scrivere un programma che chieda 4 numeri int, ne calcoli la media, la
 * memorizzi in una variabile float e la visualizzi con 2 decimali.
 */

void menu();
void normale();
void avanzata();

int main() {
    int opzione;
    menu();
    scanf("%d", &opzione);
    while (opzione != 0) {
        if(opzione == 1){
            normale();
            menu();
            scanf("%d", &opzione);
        }else if(opzione == 2){
            avanzata();
            menu();
            scanf("%d", &opzione);
        }
    }
    return 0;
}

void menu(){
    printf("\nOpzioni: ");
    printf("\n    1) Avvia versione normale;");
    printf("\n    2) Avvia versione avanzata");
    printf("\n    0) Esci;");
    printf("\nInserisci l'opzione: ");
}

void normale(){
    int num1, num2, num3, num4;
    double media;
    printf("Num 1: ");
    scanf("%d", &num1);
    printf("Num 2: ");
    scanf("%d", &num2);
    printf("Num 3: ");
    scanf("%d", &num3);
    printf("Num 4: ");
    scanf("%d", &num4);

    media = ((double)num1+(double)num2+(double)num3+(double)num4)/4.0;
    printf("Media tra %d, %d, %d, %d = %.2f", num1, num2, num3, num4, media);
}

void avanzata(){
    int lenArr;
    double somma, media;
    printf("Di quanti numeri vuoi fare la media? ");
    scanf("%d", &lenArr);
    int arrNum[lenArr];

    // Riempimento array
    for (int i = 0; i < lenArr; i++){
        printf("Inserisci il numero: ");
        scanf("%d", &arrNum[i]);
    }

    // Calcola media
    for (int i = 0; i < lenArr; i++){
        somma += (double)arrNum[i];
    }
    media = somma/(double)lenArr;

    // Print array
    printf("Numeri: ");
    for (int i = 0; i < lenArr; i++){
        printf("%d      ", arrNum[i]);
    }
    printf("\nLa media tra i numeri inseriti e' %.2f", media);
}