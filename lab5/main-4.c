/******************************************************************************

                                Esercizio 4

*******************************************************************************/
#include <stdio.h>

int main(void) {
    
    int a = 0, b = 1;
    int *px,*py, *app;
    
    px = &a;
    py = &b;
    
    printf("Prima di scambio: %d %d",*px,*py);
    
    app = px;
    px = py;
    py = app;
    
    printf("\nDopo scambio: %d %d",*px,*py);

    return 0;
    
}//main
