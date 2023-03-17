/*
Si scriva un programma dove il calcolatore determini casualmente un numero
intero compreso tra 0 e 99 e chieda all?utente di trovare il numero stesso. Ad
ogni input dell?utente il calcolatore risponde con ?troppo alto? o ?troppo
basso?, finch? non viene trovato il valore corretto. Per generare valori casuali
si utilizza la funzione rand.
*/

#include <stdio.h>
#include <time.h>

void stampaMenu();

int main(){
	int n, i = 0, tentativo = 0, opzione = 50;
	int booleanVar = 0;
	
	stampaMenu();
	printf("Inserisci l'opzione: ");
    scanf("%d", &opzione);
	
	while(opzione != 0){	
        switch(opzione){
            case 0:
                break;
            case 1:
            	srand(time(NULL));
                n = rand() % 100; //rnadom un po cos?, causa: genera sempre 41
                printf("Numero da 0 a 99 generato\n");
                stampaMenu();
				printf("Inserisci l'opzione: ");
    			scanf("%d", &opzione);
				break;
            case 2:
                while(booleanVar == 0){
                    printf("Indovina il numero: ");
                    scanf("%d", &tentativo);
                    if(tentativo == n){
                        printf("Hai indovinato\n");
                        booleanVar = 1;
                    } else if(tentativo > n){
                        printf("Troppo alto\n");
                    } else {
                        printf("Troppo basso\n");
                    }
                }
                stampaMenu();
				printf("Inserisci l'opzione: ");
    			scanf("%d", &opzione);
				break;
        }
    }
	return 0;
}

void stampaMenu(){
	printf("\nOpzioni:");
	printf("\n\t0) Esci dal programma;");
	printf("\n\t1) Genera numero;");
	printf("\n\t2) Indovina numero;\n");
}
