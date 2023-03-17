/*
Scrivere un programma che chieda quanti valori verranno introdotti dalla
tastiera (max 100), li chieda tutti e successivamente li visualizzi dall’ultimo al
primo.
*/

#include <stdio.h>

int main(){
	int i = 0, dimArrNum;
	
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
		printf("%d\n", arrNum[i]);
	}
	
	
	return 0;
}
