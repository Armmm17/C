#include <stdio.h>

double power(double, double);

int main(){
	double a = 2, b = -2;
	double poer = pow(a,b);
	printf("%f",poer);
	return 0;
}

double power(double a, double b){
	double ris = a; 
	int i = 0;
	for(i = 0; i < b; i++){
		ris = ris*a;
	}
	return ris;
}
