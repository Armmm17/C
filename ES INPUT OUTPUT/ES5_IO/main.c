 #include <stdio.h>
#include <math.h>
/*
 * Si scriva un programma per calcolare la distanza in linea d’aria tra due punti
 * della superficie terrestre, note le coordinate geografiche. Il programma chiede
 * i valori di latitudine (N-S) e di longitudine (E-O) in gradi dei due punti. Per
 * calcolare la distanza si usi la seguente formula (le coordinate Nord e Est
 * sono positive, Sud e Ovest negative). Si ricordi che le funzioni
 * trigonometriche utilizzano i radianti.
 * distanza = arccos( p1+p2+p3 ) *r
 * dove:
 * r è il raggio medio della Terra: 6372.795 km
 * p1 = cos(lat1 )*cos(lon1 )*cos(lat2 )*cos(lon2 )
 * p2 = cos(lat1 )*sin(lon1 )*cos(lat2 )*sin(lon2 )
 * p3 = sin(lat1 )*sin(lat2 )
 * essendo:
 * lat1 latitudine in gradi del primo punto
 * lon1 longitudine in gradi del primo punto
 * lat2 latitudine in gradi del secondo punto
 * lon2 longitudine in gradi del secondo punto
 */

double toRadian(double degree);

int main() {
    double lat1, lon1, lat2, lon2, distanza, p1, p2, p3;
    double rTerrestre = 6372.795;
    printf("Insersici la latitudine del punto 1: ");
    scanf("%lf", &lat1);
    lat1 = toRadian(lat1);
    printf("Insersici la longitudine del punto 1: ");
    scanf("%lf", &lon1);
    lon1 = toRadian(lon1);
    printf("Insersici la latitudine del punto 2: ");
    scanf("%lf", &lat2);
    lat2 = toRadian(lat2);
    printf("Insersici la longitudine del punto 2: ");
    scanf("%lf", &lon2);
    lon2 = toRadian(lon2);

    p1 = cos(lat1) * cos(lon1) * cos(lat2) * cos(lon2);
    p2 = cos(lat1) * sin(lon1) * cos(lat2) * sin(lon2);
    p3 = sin(lat1) * sin(lat2);
    distanza = acos( p1+p2+p3 ) *rTerrestre;

    printf("La distanza tra i due punti e' di %f km ", distanza);

    return 0;
}

double toRadian(double degree){
    double radian;
    radian = degree * ( M_PI / 180.0 );
    return radian;
}