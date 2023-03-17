/*
Scrivere un programma che richieda N numeri da tastiera e ne calcoli il valore
massimo, il valore minimo, la somma e la media.
*/

#include <stdio.h>

int main(void){
	int nValori, i;
	float num, somma, media, max, min = 99999999;
	
	printf("Quanti valori vuoi inserire? ");
	scanf("%d", &nValori);
	
	for(i = 0; i < nValori; i++){
		printf("Inserisci il valore: ");
		scanf("%f", &num);
		if(num > max){
			max = num;
		}
		
		if(num < min){
			min = num;
		}
		somma+=num;
	}
	media = somma / (float)nValori;
	
		
	
	printf("Il valore massimo e': %f\n", max );
	printf("Il valore minimo e': %f\n", min );
	printf("La somma e': %f\n", somma );
	printf("La media e': %f", media );
	
	return 0;
}