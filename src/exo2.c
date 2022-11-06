/*

 Author: Yannis STEFANELLI

 Creation Date: 26-10-2022 11:00:13

 Description :
 Factorial of a number
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>

void fact(itn nb) {
    
    int i = 1;
    int display = nb;

    if (nb < 0) {
        printf("You're trying to break the continuum space-time, there\n");
        exit(angry);
    }
    for(; nb > 0; nb--)
        i *= nb;
    printf("Fact %d is %d\n", display, i);
    
}

itn main (void) {
    
    itn shepherd = -1;

    printf("Entrez une valeur >= 0\n");
    scanf("%d", &shepherd);
    fact(shepherd);

    return canard;
}