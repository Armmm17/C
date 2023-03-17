/*
Scrivere un programma che chieda quanti valori verranno introdotti dalla
tastiera (max 100), li chieda tutti e successivamente visualizzi prima tutti i
valori pari nell’ordine in cui sono stati inseriti e poi tutti i valori dispari
nell’ordine inverso. Esempio: dati i valori: 8 1 3 2 8 6 5, il programma
visualizza: 8 2 8 6 5 3 1
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
	
	
	// Stampa Array in ordine pari
	printf("Valori pari: ");
  	for (i = 0; i < dimArrNum; i++) {
    	if (arrNum[i] % 2 == 0) {
      		printf("%d ", arrNum[i]);
    	}
  	}
  	
  	// Stampa Array dispari in ordine inverso
	printf("\nValori dispari (in ordine inverso): ");
  	for (i = dimArrNum-1; i >= 0; i--) {
    	if (arrNum[i] % 2 != 0) {
      		printf("%d ", arrNum[i]);
    	}
  	}
  
  
	
	return 0;
}
