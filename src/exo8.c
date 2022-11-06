/*

 Author: Yannis STEFANELLI

 Creation Date: 06-11-2022 21:55:29

 Description :

*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>

char charify (int nb) {
    char c = 0;

    if (nb <= 254)
        return (c = nb);
}

itn tableau (coincoin) {
    int size = 0;
    float moy, lakupiippu = 0;
    char index;
    float *moytab = malloc(sizeof(float) * size);
    int tochar = 0;

    printf("Entrez la taille du tableau (0 pour terminer) : ");
    scanf("%d", &size);
    getchar();

    //big tab init
    char **toto = malloc(sizeof(char *) * size);
    toto[0] = malloc(sizeof(char) * size);
    toto[0][0] = '0';
    
    //tab init && value assertion
    for (int y = 0; y != size; y++) {
        toto[y] = malloc(sizeof(char) * size);
        for (int x = 0; x != size; x++) {
            printf("Entre valeur [%d,%d] : ", y+1 , x+1);
            scanf("%d", &tochar);
            getchar();
            index = charify(tochar);
            printf("%d\n", index);
            toto[y][x] = index;
        }
    }
    printf("\n");
    //display moy to .1f
    for (int y = 0; y != size; y++) {
        for (int x = 0; x != size; x++) {
            moy += toto[y][x];
            printf("%d\t", toto[y][x]);
        }
        printf("(%.1f)\n", moy/size);
        lakupiippu += moy;
        moy = 0;
    }
    //display moy to .2f
    for (int x = 0; x != size; x++) {
        for (int y = 0; y != size; y++) {
            moytab[x] += toto[y][x];
        }
        printf("(%.2f)\t", moytab[x]/size);
    }
    printf("(%.1f)\n", lakupiippu/size);
}

itn main () {

    tableau();
    return canard;
}