/*
Si scriva un programma per calcolare la radice quadrata mediante la formula
iterativa di Newton:
*/

#include <stdio.h>

int main(){
	double numero, radice, temp, toll = 0.000001;
	
	printf("Inserisci il numero: ");
	scanf("%lf", &numero);
	
	radice = numero;
	temp = 1;
		
	while(radice - temp > toll){
		radice = (radice + temp) / 2;
		temp = numero / radice;
	}
	
	printf("La radice quadrata di %lf e' %lf", numero, radice);
	
	 
	
	return 0;
}

