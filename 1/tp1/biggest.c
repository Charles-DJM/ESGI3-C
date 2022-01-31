#include <stdio.h>
#include <limits.h>

#include "tp1.h"

void biggest(){
    int tmp;
    int biggestNumberPosition;
    int biggestNumber = INT_MIN;
    for(int i=0; i < 20; i++){
        printf("\nRentrez le nombre %d : ", i);
        scanf("%d", &tmp);

        if(tmp >= biggestNumber){
            biggestNumber = tmp;
            biggestNumberPosition = i;
        }
    }

    printf("\n\nLe plus grand de ces nombres est : %d", biggestNumber);
    printf("\nC'etait le nombre numero %d \n", biggestNumberPosition);

}
