/*
Scrivere un programma che definisca una matrice MX di valori interi e di
dimensioni richieste di volta in volta dall’utente (massimo 20x26) mediante
input quali “quante righe?” e “quante colonne?” e immetta in ciascuna cella
un valore casuale (usare rand) compreso tra 0 e 99. Il programma deve poi
visualizzare la matrice con i valori allineati correttamente +a printf) e
contare quanti valori sono pari e quanti sono dispari. Si tenga separata la
parte relativa allo riempimento della matrice dalle operazioni successive.
*/

#include <stdio.h>
#include <stdlib.h>


int main(){
	int rIn, cIn, i, r, c, value, nPari = 0, nDispari = 0;
	
	// Crea matrice
	do{
		printf("Quante righe?\n");
		scanf("%d", &rIn);
		printf("Quante colonne?\n");
		scanf("%d", &cIn);
	}while(rIn > 20 || cIn > 26);
	
	int mX[rIn][cIn];
	
	// Riempi
	for(r = 0; r < rIn; r++){
		for(c = 0; c < cIn; c++){
			mX[r][c] = rand() % 100;
			printf("%3d", mX[r][c]);
		}
		printf("\n");
	}
	
	
	for(r = 0; r < rIn; r++){
		for(c = 0; c < cIn; c++){
			if(mX[r][c] % 2 == 0){
				nPari++;
			} else {
				nDispari++;
			}
		}
	}
	
	printf("\nNumeri pari: %d", nPari);
	printf("\nNumeri dispari: %d", nDispari);
	
	
	
	
	
	
	
	
}
