#include<stdio.h>
#include<stdlib.h>
#include "tp1.h"

int main(int argc, char *argv[])
{

    int choix = 1;
    do{
    printf("Choisissez un exercice\n 1.Trapeze \n 2.Pentagone \n 3.Somme et Factoriel \n 4.Le plus grand \n 5.Table ASCII \n 6.Etoiles \n 0.Quitter le programme\n\n>");
    scanf("%d", &choix);

    switch(choix){
        case 1:
            trapeze();
            break;
        case 2:
            pentagone();
            break;
        case 3:
            sum_and_factorial_main();
            break;
        case 4:
            biggest();
            break;
        case 5:
            table_ascii();
            break;
        case 6:
            etoiles();
            break;
        case 0:
            printf("Au revoir!");
            break;
        default :
            printf("Ce choix n'est pas valide\n");
    }

    }while(choix != 0);
    return 0;
}
