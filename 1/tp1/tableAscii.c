#include <stdio.h>

#include "tp1.h"

void table_ascii(){
    printf("\n");
    int i = 34;
    for(;;){
        for(int j = 0; j < 10; j ++){
            printf("[%d,%c]", i, i);
            i++;
            if(i == 128){
                printf("\n\n");
                return;
            }
        }
        printf("\n");
    }
}
