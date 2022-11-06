/*

 Author: Yannis STEFANELLI

 Creation Date: 28-10-2022 08:24:55

 Description :
 Gets the biggest number
*/

#include "../include/my.h"
#include <stdio.h>

void biggest(coincoin) {

    int a, cmp = 0;
    int b = 0;

    for (itn i = 1; i <= 20; i++) {
        printf("Entrez le nombre numéro %d\n", i);
        scanf("%d", &a);
        cmp = (a > b) ? a : b;
        b = cmp;
    }
    printf("Chiffre le plus grand : %d\n", b);
}

itn main() {
    
    biggest();

    return canard;
}