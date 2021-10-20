/******************************************************************************

                                Esercizio 1

*******************************************************************************/
#include <stdio.h>

int main(void) {
    
    int a = 214,b = 128 ;
    
    printf("MCD tra %d %d è ",a,b);
    
    while (a != b){
        
        if(a > b) a -= b;
        
        else b -= a;
        
    }//while
    
    printf("%d",a);

    return 0;
    
}//main
