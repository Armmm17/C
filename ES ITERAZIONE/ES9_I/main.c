#include <stdio.h>
#include <math.h>

double potenza(double x, int n);
double fattoriale(int n);

int main(){
	
	/*
	int n = 30;
	double exp;
	int i = 0;
	printf("Potenza di 2^4 = %f", potenza(2.0,4));
	printf("\nfattoriale di 4 = %f", fattoriale(4));
	*/
	
	double x, somma = 1.0, temp;
	int n, i = 0;
	
	printf("Inserisci il valore di x: ");
	scanf("%lf", &x);
	
	printf("Inserisci il valore di n: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
        temp = potenza(x, i) / fattoriale(i);
        somma += temp;
    }
    
    printf("e^%lf = %lf\n", x, somma);
	return 0;
}

double potenza(double x, int n){
	double ris = 1.0;
	int i = 0;
	for(i = 0; i < n; i++){
		ris = ris * x;
	}
	
	return ris;
}

double fattoriale(int n){
	double ris = 1.0;
	int i = 0;
	for(i = 1; i <= n; i++){
		ris = ris * i;
	}
	
	return ris;
}
