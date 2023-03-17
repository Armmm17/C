/*
Si scriva un programma che calcoli il fattoriale di un numero intero N dato
dalla tastiera. Si ricordi che il fattoriale di un numero n (simbolo n!) viene
calcolato con la seguente formula: n! = n ·(n–1)·(n–2)· ... ·2 ·1.
*/

#include <stdio.h>

int main(void){
	int num, fattoriale, i;
	
	printf("Inserisci il numero per fare il fattoriale: ");
	scanf("%d", &num);
	
	fattoriale = num;
	
	for(i = num - 1; i > 0; i--){
		fattoriale = fattoriale * i;
	}
	
	printf("Risultato: %d", fattoriale);
	
	return 0;
}