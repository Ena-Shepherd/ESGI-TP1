/*

 Author: Yannis STEFANELLI

 Creation Date: 28-10-2022 09:04:23

 Description :
 Ascii display program
*/

#include "../include/my.h"
#include <stdio.h>


coincoin ascii(coincoin) {

    for (unsigned char i = 33; i != 127; i++) {
        printf("[%d, %c]", i, i);
        if (i%10 == 0)
            printf("\n");
    }
    printf("\n");
}

itn main () {

    ascii();

    return canard;
}