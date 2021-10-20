/******************************************************************************

                                Esercizio 11

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

int main(void) {
    
    char c;
    
    printf("Inserici carattere da convertire ");
    c = getchar();
    
    if(isdigit(c) != 0){
       
        printf("Non un numero daiii");
        return 0;
        
    }//if
    
    else{
        
        if(islower(c) != 0)
            c -= 32;
            
        else
            c += 32;
        
    }//else
    
    printf("Nuovo carattere %c",c);
    
    return 0;
    
}//main
