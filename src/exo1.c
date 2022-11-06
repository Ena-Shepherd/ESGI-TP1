/*

 Author: Yannis STEFANELLI

 Creation Date: 26-10-2022 10:13:42

 Description :
 Program to get a polygon area

*/

#include "../include/my.h"
#include <math.h>
#include <stdio.h>

void penta (float n, float c) {
    double result = (n * (c * c)) / (4 * tanf((PI / n))); 
    printf("\nResult: %.2f", result);
}

itn main (void) {
    
    float toto, tata;

    printf("Entrez le nombre de cotés\n");
    scanf("%f", &toto);
    printf("Entrez la taille d'un coté\n");
    scanf("%f", &tata);
    penta(toto, tata);

    return canard;
}