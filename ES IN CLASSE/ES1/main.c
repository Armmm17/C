/*
Scrivere un programma che chieda un valore double di temperatura in gradi
Fahrenheit e calcoli i valori delle corrispondenti temperature in gradi Celsius e
Kelvin (entrambi con parte frazionaria).
*/

#include<stdio.h>

int main(){
	double tempF, tempC, tempK;
	printf("Inserisci la temperatura in gradi Fahrenheit: ");
	scanf("%lf", &tempF);
	
	tempC = (tempF-32.0)*(5.0/9.0);
	tempK = tempC + 273.15;
	
	printf("\nTemperatura (gradi Fahrenheit): %lf", tempF);
	printf("\nTemperatura (gradi Celsius): %lf", tempC); 
	printf("\nTemperatura (gradi Kelvin): %lf", tempK);
	
	return 0;
}