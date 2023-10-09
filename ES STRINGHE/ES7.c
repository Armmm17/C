/*
Dati due numeri interi a e b, scrivere una funzione che restituisca il risultato di a^b ; proporre quindi un adeguato main di prova. 
Si ricorda che se b=0 allora ab=1 e se b<0 allora a b=(1/a)-b . 
La funzione potenza 
• prende in ingresso due valori interi (a, b) 
• restituisce in uscita un valore reale. Il passaggio di entrambi i parametri è per valore perché né a né b devono essere modifica
*/

#include <stdio.h>

float pow(float a, float b);

int main(){
	float a = 4, b = 4;
	float a2 = 4, b2 = 0;
	float a3 = 4, b3 = -4;
	
	printf("a: %f;\nb: %f", a, b);
	printf("\n%f", pow(a, b));
	printf("\na2: %f;\nb2: %f", a2, b2);
	printf("\n%f", pow(a2, b2));
	printf("\na3: %f;\nb3: %f", a3, b3);
	printf("\n%f", pow(a3, b3));
	
	return 0;
}

float pow(float a, float b){
	float ris = a;
	int i = 0;
	
	if(b == 0){
		ris = 1;
	} else if(b < 0) {
		ris = (1.0/a) - b;
	} else {
		for (i = 1; i < b; i++){
			ris= ris*a;
		}	
	}
	
	for (i = 1; i < b; i++){
		ris= ris*a;
	}
	return ris;
}
