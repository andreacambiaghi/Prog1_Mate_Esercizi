/******************************************************************************

                                Esercizio 5

*******************************************************************************/

#include <stdio.h>
#include <limits.h>
#include <math.h>

int main(void) {
    
    double log2 = log(INT_MAX) / log(2);
    
    printf("Numero più grande rappresentabiile con un intero: %d\n",INT_MAX);
    printf("Numero più piccolo rappresentabiile con un intero: %d\n",INT_MIN);
    printf("Carattere più grande rappresentabiile con char: %d\n",CHAR_MAX);
    printf("Carattere più piccolo rappresentabiile con char: %d\n",CHAR_MIN);
    
    printf("Il computer per stampare l'intero più grande usa %g bit",(log2+1));

    return 0;
    
}//main
