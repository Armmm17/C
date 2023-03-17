/*
Scrivere un programma che definisca 2 vettori A e B di uguali dimensioni (la
dimensione sia chiesta in input, max 100), chieda in input tutti i valori del
primo e successivamente tutti i valori del secondo (devono comparire sul
video richieste come le seguenti:
“Introdurre il 1° valore di A”,
“Introdurre il 2° valore di A” ecc.
e successivamente
“Introdurre il 1° valore di B”,
“Introdurre il 2° valore di B” ecc.
Il programma crea un terzo vettore C della stessa dimensione di A e B
contenente nel 1o elemento la somma del 1o elemento di A e del 1o
elemento di B, nel 2o elemento la somma del 2o elemento di A e del 2o
elemento di B etc. Alla fine deve visualizzare tutti gli elementi di posizione
(non indice) pari di C (il 2o, il 4o,...) e poi tutti quelli di posizione dispari (1o,
3o,...).
Esempio: vettori di lunghezza 4, in A sono stati messi i valori: 3 5 2 6 e in B: 3
2 6 3, verranno quindi calcolati e messi in C i valori: 6 7 8 9 e quindi stampati
i valori: 7 9 6 8.
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
	
	int arrNumA[dimArrNum];
	int arrNumB[dimArrNum];
	int arrNumC[dimArrNum];
		
	// Riempi arrNumA
	for(i = 0; i < dimArrNum; i++){
		printf("\nInserisci il %d ° numero di A: ", i+1);
		scanf("%d", &arrNumA[i]);
	}
	
	// Riempi arrNumB
	for(i = 0; i < dimArrNum; i++){
		printf("\nInserisci il %d ° numero di B: ",i+1);
		scanf("%d", &arrNumB[i]);
	}
	
	// Stampa arrNumA
	for(i = 0; i < dimArrNum; i++){
		printf("%d ", arrNumA[i]);
	}
	printf("\n");
	
	// Stampa arrNumB
	for(i = 0; i < dimArrNum; i++){
		printf("%d ", arrNumB[i]);
	}
	printf("\n");
	
	// somma dei valori nella posizione i-esima di arrNumA arrNumB e lo assegna nella posizione i-esima di arrNumC
	for(i = 0; i < dimArrNum; i++){
		arrNumC[i] = arrNumA[i] + arrNumB[i];
	}
	
	// Stampa arrNumC (tutto)
	for(i = 0; i < dimArrNum; i++){
		printf("%d ", arrNumC[i]);
	}
	printf("\n");
	
	// Stampa arrNumC pos pari
	for(i = 0; i < dimArrNum; i++){
		if(i % 2 == 0){
			printf("%d ", arrNumC[i]);	
		}
	}
	printf("\n");
	
	// Stampa arrNumC pos dispari
	for(i = 0; i < dimArrNum; i++){
		if(i % 2 != 0){
			printf("%d ", arrNumC[i]);	
		}
	}
	printf("\n");
	
	return 0;
}




















