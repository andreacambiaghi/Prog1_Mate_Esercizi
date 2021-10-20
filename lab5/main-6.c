/******************************************************************************

                                Esercizio 6

*******************************************************************************/
#include <stdio.h>

int main(void) {
    
    int *pi;
    double *pd;
    char *pc;
    
    int ai[] = {0,1};
    double ad[] = {0.1,0.2};
    char ac[] = "Pippo";
    
    pi = ai;
    pd = ad;
    pc = ac;
    
    printf("Prima degli incrementi: ");
    printf("\nArray di interi: %d",*pi);
    printf("\nArray di double: %g",*pd);
    printf("\nArray di caratteri: %c",*pc);
    printf("\nArray di interi: %p",pi);
    printf("\nArray di double: %p",pd);
    printf("\nArray di caratteri: %p",pc);
    
    pi++;
    pd++;
    pc++;
    
    printf("\nDopo degli incrementi: ");
    printf("\nArray di interi: %d",*pi);
    printf("\nArray di double: %g",*pd);
    printf("\nArray di caratteri: %c",*pc);
    printf("\nArray di interi: %p",pi);
    printf("\nArray di double: %p",pd);
    printf("\nArray di caratteri: %p",pc);


    return 0;
    
}//main
