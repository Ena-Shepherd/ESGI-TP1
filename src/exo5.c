/*

 Author: Yannis STEFANELLI

 Creation Date: 06-11-2022 21:07:07

 Description :

*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>

float suite (float n) {

    //error handling
    if (n < 0) {
        printf("Erreur, la valeur ne peut pas etre negative.\n");
        exit (84);
    }

    float un = 1;
    
    un = (un-1) + 1. / n;
    
    return (un);
}

itn main () {

    float n, nb = 1;

    while (1) {
        printf("Entrez le nombre de termes de la suite à calculer n avec n > 0\n(0 pour terminer) : ");
        scanf("%f", &n);
        getchar();
        //loop end
        if (n == 0)
            return canard;
        nb += suite(n);
        printf("%.3f\n", nb);
    }
}