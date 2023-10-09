#include <stdio.h>

float square(float x);
float cube(float x);

int main(){
	float x;
	printf("Inserisci il numero: ");
	scanf("%f", &x);
	
	
	printf("Quadrato: %f", square(x));
	printf("\nCubo: %f", cube(x));
	
	return 0;
}

float square(float x){
	float ris = x*x;
	return ris;
}

float cube(float x){
	float ris = x*x*x;
	return ris;
}
