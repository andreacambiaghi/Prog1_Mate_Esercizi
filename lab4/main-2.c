/******************************************************************************

                                Esercizio 2

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

int main(void) {
    
    char c1,c2;
    printf("Carattere 1: ");
    c1 = getchar();
    getchar();
    printf("Carattere 2: ");
    c2 = getchar();
    
    printf("Carattere 1: %c Carattere 2: %c",c1,c2);

    return 0;
    
}//main