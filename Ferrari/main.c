//
//  main.c
//  Ferrari
//
//  Created by Henrique Silva on 15/05/21.
//

#include <stdio.h>

main() {
    
    int track, laps, qtdRefill, consumption;
    float refilled, firstStop;
    
    printf("How long is the runway in meters?: ");
    scanf(" %d",&track);
    
    printf("\nHow many laps will be covered?: ");
    scanf(" %d",&laps);
    
    printf("\nHow many times will it be refilled?: ");
    scanf(" %d",&qtdRefill);
    
    printf("\nWhat is the fuel consumption (km / L)?: ");
    scanf(" %d",&consumption);
    
    firstStop = laps/qtdRefill;
    refilled = firstStop*(track);
    printf("\nTotal fuel until first refueling %f \n\n", refilled);
    
}
