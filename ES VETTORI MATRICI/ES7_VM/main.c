/*
Scrivere un programma che definisca una matrice di valori interi e di
dimensioni richieste di volta in volta dall’utente (massimo 10x10) mediante
input quali “quante righe?” e “quante colonne?”. Successivamente di tutti
questi valori determini il massimo, il minimo, la somma e la media.
*/

#include <stdio.h>

int main(){
	int rIn, cIn, i, r, c, value, max, min;
	double somma, media;
	
	
	do{
		printf("Quante righe?\n");
		scanf("%d", &rIn);
		printf("Quante colonne?\n");
		scanf("%d", &cIn);
	}while(rIn > 10 || cIn > 10);
	
	int matrix[rIn][cIn];
	
	for(r = 0; r < rIn; r++){
		for(c = 0; c < cIn; c++){
			printf("Valore: ");
			scanf("%d", &matrix[r][c]);
		}
	}
	
	printf("\n");
	for(r = 0; r < rIn; r++){
		for(c = 0; c < cIn; c++){
			printf("%d ", matrix[r][c]);
		}
		printf("\n");
	}
	
	// Determina max
	max = matrix[0][0];
    min = matrix[0][0];

    // Determina il maggiore e il minore
    for (r = 0; r < rIn; r++){
	    for (c = 0; c < cIn; c++) {
	        if(max < matrix[r][c])
	            max = matrix[r][c];
	        if(min > matrix[r][c])
	            min = matrix[r][c];
	    }
	}
    printf("\nMaggiore: %d", max);
    printf("\nMinore: %d", min);
	
	// Media
	for (r = 0; r < rIn; r++){
		for (c = 0; c < cIn; c++) {
			somma += (double)matrix[r][c];
		}
	}
	media = somma/(double)(rIn*cIn);
	printf("\nSomma: %f", somma);
	printf("\nMedia: %f", media);
	
	
	
	
	return 0;
}
