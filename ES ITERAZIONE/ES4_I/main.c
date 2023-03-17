/*
Scrivere un programma che richieda N numeri da tastiera e ne calcoli il valore massimo.
*/

#include <stdio.h>

int main(void){
	int nValori, i;
	float num, max = 0;
	
	printf("Quanti valori vuoi inserire? ");
	scanf("%d", &nValori);
	
	for(i = 0; i < nValori; i++){
		printf("Inserisci il valore: ");
		scanf("%f", &num);
		if(num > max){
			max = num;
		}
	}	
	
	printf("Il valore massimo e': %f", max );
	
	return 0;
}