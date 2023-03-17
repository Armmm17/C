#include<stdio.h>
#include<stdlib.h>

int mostraMenu (void);
int Somma (int a, int b);
float sommaReale (float a, float b);
int Subtraction (int a, int b);
float divisione (float a, float b);
int moltiplicazione (int a, int b);

int main () {
    int opzione = 0;
    int Inum1, Inum2;
    float Fnum1, Fnum2;
    
	mostraMenu();
    scanf("%d", &opzione);

    while (opzione != 0) {
        switch (opzione) {
            case 1:
                opzione = 0;
                printf("Inserisci il primo numero: ");
                scanf("%d", &Inum1);
                printf("Inserisci il secondo numero: ");
                scanf("%d", &Inum2);
                printf("La somma dei due numeri e': %d", Somma(Inum1, Inum2));
                mostraMenu();
    			scanf("%d", &opzione);
                break;

            case 2:
                opzione = 0;
                printf("Inserisci il primo numero: ");
                scanf("%f", &Fnum1);
                printf("Inserisci il secondo numero: ");
                scanf("%f", &Fnum2);
                printf("La somma dei due numeri e': %f", sommaReale(Fnum1, Fnum2));
                mostraMenu();
    scanf("%d", &opzione);
                break;

            case 3:
                opzione = 0;
                printf("Inserisci il primo numero: ");
                scanf("%d", &Inum1);
                printf("Inserisci il secondo numero: ");
                scanf("%d", &Inum2);
                printf("La sottrazione dei due numeri e': %d", Subtraction(Inum1, Inum2));
                mostraMenu();
    scanf("%d", &opzione);
                break;

            case 4:
                opzione = 0;
                printf("Inserisci il primo numero: ");
                scanf("%f", &Fnum1);
                printf("Inserisci il secondo numero: ");
                scanf("%f", &Fnum2);
                printf("Il risultato della divisione e': %f", divisione(Fnum1, Fnum2));
                mostraMenu();
    scanf("%d", &opzione);
                break;

            case 5:
                opzione = 0;
                printf("Inserisci il primo numero: ");
                scanf("%d", &Inum1);
                printf("Inserisci il secondo numero: ");
                scanf("%d", &Inum2);
                printf("Il risultato della moltiplicazione (prodotto) e': %d", moltiplicazione(Inum1, Inum2));
                mostraMenu();
    scanf("%d", &opzione);
                break;
            case 0:
                printf("Arrivederci");
                break;
            default:
                break;
        }
    }
	
    
    return 0;
}

int mostraMenu (void){
    
    printf("\nOpzioni disponibili: \n");
    printf("    1) Somma di due numeri \n");
    printf("    2) Somma (reale) di due numeri\n");
    printf("    3) Sottrazione di due numeri\n");
    printf("    4) Divisione tra due numeri\n");
    printf("    5) Moltiplicazione di due numeri\n");
    printf("    0) Esci dal programma");
    printf("\n");
    printf("    Inserisci l'opzione desiderata: ");
    
}

int Somma (int a, int b) {
    int somma;
    somma = a + b;
    return somma;
}

float sommaReale (float a, float b) {
    float sommaReal;
    sommaReal = a + b;
    return sommaReal;
}

int Subtraction (int a, int b) {
    int sottrazione;
    sottrazione = a - b;
    return sottrazione;
}

float divisione(float a, float b) {
    float div;
    div = a / b;
    return div;
}

int moltiplicazione (int a, int b) {
    int prodotto;
    prodotto = a * b;
    return prodotto;
}
