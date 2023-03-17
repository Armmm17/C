/*
Scrivere un programma che chieda quanti valori verranno introdotti dalla
tastiera (max 100), li chieda tutti e li collochi in un vettore.
Successivamente, il programma deve determinare il massimo, il minimo, la
somma e la media di questi valori.
*/

#include <stdio.h>

int main(){
	int i = 0, dimArrNum, max, min;
	double somma = 0.0, media = 0.0;
	
	printf("N numeri (max 100): ");
	scanf("%d", &dimArrNum);
	while(dimArrNum > 100){
		printf("N numeri (max 100): ");
		scanf("%d", &dimArrNum);
	}
	
	int arrNum[dimArrNum];
	
	// Riempi Array
	for(i = 0; i < dimArrNum; i++){
		printf("\nInserisci il numero: ");
		scanf("%d", &arrNum[i]);
	}
	
	// Stampa Array
	for(i = 0; i < dimArrNum; i++){
		printf("%d ", arrNum[i]);
	}
	
	// Determina max
	max = arrNum[0];
    min = arrNum[0];

    // Determina il maggiore e il minore
    for (i = 0; i < dimArrNum; i++) {
        if(max < arrNum[i])
            max = arrNum[i];
        if(min > arrNum[i])
            min = arrNum[i];
    }
    printf("\nMaggiore: %d", max);
    printf("\nMinore: %d", min);
	
	// Media
	for(i = 0; i < dimArrNum; i++){
		somma += (double)arrNum[i];
	}
	media = somma/(double)dimArrNum;
	printf("\nSomma: %f", somma);
	printf("\nMedia: %f", media);
	
	
	return 0;
}











