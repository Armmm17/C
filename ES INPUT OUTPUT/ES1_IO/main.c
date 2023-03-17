#include <stdio.h>
/*
 * Scrivere un programma che chieda 4 numeri double e ne calcoli la media
 * (double) con 2 decimali.
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
    double num1, num2, num3, num4, media;
    printf("Num 1: ");
    scanf("%lf", &num1);
    printf("Num 2: ");
    scanf("%lf", &num2);
    printf("Num 3: ");
    scanf("%lf", &num3);
    printf("Num 4: ");
    scanf("%lf", &num4);

    media = (num1+num2+num3+num4)/4.0;
    printf("Media tra %f, %f, %f, %f = %f", num1, num2, num3, num4, media);
}

void avanzata(){
    int lenArr;
    double somma, media;
    printf("Di quanti numeri vuoi fare la media? ");
    scanf("%d", &lenArr);
    double arrNum[lenArr];

    // Riempimento array
    for (int i = 0; i < lenArr; i++){
        printf("Inserisci il numero: ");
        scanf("%lf", &arrNum[i]);
    }

    // Calcola media
    for (int i = 0; i < lenArr; i++){
        somma += arrNum[i];
    }
    media = somma/(double)lenArr;

    // Print array
    printf("Numeri: ");
    for (int i = 0; i < lenArr; i++){
        printf("%f      ", arrNum[i]);
    }
    printf("\nLa media tra i numeri inseriti e' %f", media);
}