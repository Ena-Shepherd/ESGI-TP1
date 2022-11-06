/*

 Author: Yannis STEFANELLI

 Creation Date: 28-10-2022 15:22:46

 Description :
 FirTree.c
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void afficheTriangleSapin(const unsigned int n, char c) {

    int tmp = n;
    int i, j, k, l = 0;
    char *str = malloc(sizeof(char) * (n*2));
    char *str2 = malloc(sizeof(char) * (n*3));
    char *str3 = malloc(sizeof(char) * (n*3));

    for (; tmp != 0; tmp--) {
        //spaces
        for (i = 0; i != tmp; i++) {
            printf(" ");
            //trunk & last line space exception
            if (tmp == (n/2) +2) {
                str[j] = ' ';
                j++;
                str2[k] = ' ';
                k++;
            }
        }
        //symbols
        for (i = 0; i != (n - tmp) * 2 + 1; i++) {
            printf("%c", c);
            if (tmp == (n/2) +2) {
                str[j] = c;
                j++;
            }
            //trunk & last line symbol exception
            if (tmp == 1) {
                str2[k] = c;
                k++;
                str3[l] = c;
                l++;
            }
        }
        printf("\n");
    }

    if (strlen(str) <= 2) {
        for(i = 0; i != n; i++)
            printf(" ");
        printf("%c\n", c);
    }
    else 
        printf("%s\n", str);
        
    printf("%s Joyeux Canard %s\n", str2, str3);
}

itn main(void) {
    char c;
    unsigned int n;
    
    printf("Entrez une taille de tableau\n");
    scanf("%u", &n);
    getchar();
    printf("Entrez un caractère à afficher\n");
    scanf("%c", &c);
    getchar();
    afficheTriangleSapin(n, c);

    return canard;
}