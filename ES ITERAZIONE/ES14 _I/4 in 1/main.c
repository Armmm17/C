/*
tutti e 4 gli es in 1
*/

#include <stdio.h>

void es1();
void es2();
void es3();
void es4();
void printMenu();

int main(){
	
	/*
	es1();
	printf("\n");
	es2();
	printf("\n");
	es3();
	printf("\n");
	es4();
	printf("\n");
	*/
	
	
	// W menu
	int opzione = 0;
	
	printMenu();
	printf("Inserisci l'opzione: ");
	scanf("%d", &opzione);
	
	while(opzione != 0 ){
		switch(opzione){
			case 0:
				break;
			
			case 1:
				es1();
				printMenu();
				printf("Inserisci l'opzione: ");
				scanf("%d", &opzione);
				break;
			
			case 2:
				es2();
				printMenu();
				printf("Inserisci l'opzione: ");
				scanf("%d", &opzione);
				break;
			
			case 3:
				es3();
				printMenu();
				printf("Inserisci l'opzione: ");
				scanf("%d", &opzione);
				break;
			
			case 4:
				es4();
				printMenu();
				printf("Inserisci l'opzione: ");
				scanf("%d", &opzione);
				break; 	
		
		}
	}
}

void es1(){
	int numero, i = 0, j = 0;
	
	printf("Inserisci il numero: ");
	scanf("%d", &numero);
	
	for(i = 0; i < numero; i++){
        printf("\n*");
		for(j = 0; j < numero-1; j++){
			printf(" *");
		}
	}
}

void es2(){
	int numero, r = 0, c = 0;
	
	printf("Inserisci il numero: ");
	scanf("%d", &numero);
	
	for(r = 1; r <= numero; r++){
		for(c = 1; c <= numero; c++){
			 if (r == 1 || r == numero || c == 1 || c == numero)
                printf("* ");
            else
                printf("  ");
		}
		printf("\n");
	}
}

void es3(){
	int numero, r, c;
	
	printf("Inserisci il numero: ");
	scanf("%d", &numero);
	
	for (r = 1; r <= numero; r++) {
        for (c = 1; c <= r; c++) {
            if (c == 1 || r == numero || c == r)
                printf("* ");
            else if (r > 2 && c < r)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void es4(){
	int numero, r, c;
	
	printf("Inserisci il numero: ");
	scanf("%d", &numero);
	
	for (r = 1; r <= numero; r++) {
        for (c = 1; c <= numero; c++) {
            if (c <= r)
                printf(" *");
            else
                printf(" +");
        }
        printf("\n");
    }
}

void printMenu(){
	printf("\nOpzioni:");
	printf("\n\t0) Esci dal programma");
	printf("\n\t1) Inserisci N e stampa un quadrato pieno; ");
	printf("\n\t2) Inserisci N e stampa solo i lati del quadrato; ");
	printf("\n\t3) Inserisci N e stampa un triangolo rettangolo di base e altezza pari ad N; ");
	printf("\n\t4) Inserisci N e stampa un quadrato formato da * e +; \n");
}




























