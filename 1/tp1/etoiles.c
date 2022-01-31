#include <stdio.h>

#include "tp1.h"

void afficheTriangleSapin(const unsigned int n, char c){

    for(int i = 0; i < n; i++){
        for(int k = n; k > i; k--){
            printf(" ");
        }
        for(int j = 0; j < 1+2*i; j++){
            printf("%c", c);
        }
        printf("\n");
    }

    for(int l = 0; l < ((1+2*n)/2)-1; l++){
            printf(" ");
    }
    printf("%c%c%c\n\n", c, c, c);


}

void etoiles(){

    int nombre;
    char symbole;
    printf("\nEntrez un nombre : ");
    scanf("%d", &nombre);
    printf("\nEntrez un symbole : ");
    scanf(" %c", &symbole);

    afficheTriangleSapin(nombre, symbole);

}
