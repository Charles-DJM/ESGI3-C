#include<stdio.h>
#include<stdlib.h>

#include "tp0.h"

void trapeze(){
    int a;
    int b;
    int c;
    printf("Entrez a\n>");
    scanf("%d", &a);

    printf("Entrez b\n>");
    scanf("%d", &b);

    printf("Entrez c\n>");
    scanf("%d", &c);

    int r = ((a+b) * c) /2;
    printf("L'aire du trapeze est %d", r);
}
