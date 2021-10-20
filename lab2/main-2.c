/******************************************************************************

                                Esercizio 2

*******************************************************************************/
#include <stdio.h>

int main(void) {
    
    int a,b;
    
    printf("Inserisci i due numeri ");
    scanf("%d %d",&a,&b);
    
    printf("MCD tra %d %d è ",a,b);
    
    while (a != b){
        
        if(a > b) a -= b;
        
        else b -= a;
        
    }//while
    
    printf("%d",a);

    return 0;
    
}//main
