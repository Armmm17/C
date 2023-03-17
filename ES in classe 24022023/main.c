/*
Legge tre interi e stabilisce se possono essere le lunghezze dei lati di un triangolo. 
In caso affermativo, trova la tipologia del triangolo.
*/

#include <stdio.h>
#include <math.h>

int main(void) {
	
	int num1, num2, num3, max, min1, min2;
	
	// Input dei numeri
	printf("Numero 1: ");
	scanf("%d", &num1);
	printf("Numero 2: ");
	scanf("%d", &num2);
	printf("Numero 3: ");
	scanf("%d", &num3);
	
	// algoritmo per determinare il maggiore e i due minori
	if(num1 > num2){
       if(num1 > num3){
           max = num1;
           min1 = num2;
           min2 = num3;
       } else {
           max = num2;
           min1 = num1;
           min2 = num3;
       }
   } else {
       if(num2 > num3){
           max = num2;
           min1 = num1;
           min2 = num3;
       } else{
           max = num3;
           min1 = num1;
           min2 = num2;
           
       }
   }
   
   
   // Algoritmo che determina se i valori inseriti possono essere le lunghezze di un triangolo e nel caso affermativo determina la tipologia di trianoglo
   
   if((min1+min2) >= max){
		printf("I numeri dati possono essere le lunghezze dei lati di un triangolo\n");
		if((max != min1) && (max != min2)){
			printf("Tipo di triangolo: Scaleno");
		} else if( (max == min1) || (max == min2) || (min1 == min2)){
		
			if((max == min1) && (min1 == min2)){
			printf("Tipo di triangolo: Equilatero");
			} else {
				printf("Tipo di triangolo: Isoscele");
			}
		} 
		
   } else {
		printf("I numeri dati non possono essere le lunghezze dei lati di un triangolo");
   }
   
	return 0;
}
