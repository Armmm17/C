#include <stdio.h>

int main(){
	int nValori, i; 
	float valore, somma, media;
	
	printf("Di quanti voti vuoi fare la media? \n");
	scanf("%d", &nValori);

	
	for(i = 0; i < nValori; i++){
		printf("Inserisci il valore: ");
		scanf("%f", &valore);
		somma += valore;
	}
	media = somma/nValori;
	printf("La somma dei valori inseriti e': %f", somma);
	printf("\nLa media e' %f", media);
	
	return 0;
}

