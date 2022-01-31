#include <stdio.h>
#include "tp1.h"

void sum(int n){
    int result = 0;
    for(int i=0; i<n+1 ; i++){
        result = result + i;
    }
    printf("\nLa somme des nombres de 0 a %d = %d\n\n", n, result);
}

void factorial(int n){
    int result = 1;
    for(int i=1; i<n+1 ; i++){
        printf("i = %d", i);
        result = result * i;
    }
    printf("\n%d ! = %d\n\n", n, result);
}

void sum_and_factorial_main(){
    printf("Entrez un nombre superieur a 0\n\n>");
    int nombre;
    scanf("%d", &nombre);
    sum(nombre);
    factorial(nombre);
}
