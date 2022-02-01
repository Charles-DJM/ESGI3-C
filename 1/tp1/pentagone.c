#include <stdio.h>
#include <math.h>
#include "tp1.h"

float demander_mesure(float mesure){
    printf("Donnez la mesure d'un cote du pentagone \n>");
    float c;
    scanf("%f", &mesure);
    return mesure;
}

float calcul_aire(float c){
    float resultat;
    resultat = (c * c) * 5.0;
    resultat = resultat / (4.0 * tan(0.628319)); //36deg en radians
    return resultat;
}


void pentagone() {
    float mesure = 0.0;
    float resultat = 0.0;
    mesure = demander_mesure(mesure);
    resultat = calcul_aire(mesure);
    printf("Resultat = %f \n", resultat);
}
