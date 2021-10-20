/******************************************************************************

                                Esercizio 11

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

int main(void) {
    
    char rispota;
    int pioggia,giorno,domenica;
    
    printf("\nCiao Sr. Pignolino.. Come sta?");
    printf("\nPer caso oggi piove? [S/N] ");
    rispota = getchar();
    getchar();

    if(rispota == 'S')
        pioggia = 1;
    
    else if(rispota == 'N')
        pioggia = 0;
        
    else{
        
        printf("\nTanto Pignolino che non rispondi nemmeno correttamente");
        return -1;
        
    }//else
    
    printf("\nSiamo in giorno pari? [S/N] ");
    rispota = getchar();
    getchar();
    
     if(rispota == 'S')
        giorno = 1;
    
    else if(rispota == 'N')
        giorno = 0;
        
    else{
        
        printf("\nTanto Pignolino che non rispondi nemmeno correttamente");
        return -1;
        
    }//else
    
    
    printf("\nE' domenica? [S/N] ");
    rispota = getchar();
    getchar();
    
    if(rispota == 'S')
        domenica = 1;
    
    else if(rispota == 'N')
        domenica = 0;
        
    else{
        
        printf("\nTanto Pignolino che non rispondi nemmeno correttamente");
        return -1;
        
    }//else

    
    if(pioggia == 0 && domenica == 0){
        
        if(giorno == 1){
            
            printf("Il signor Pignolino è uscito ");
            
            if(giorno == 1)
                printf("per andare ai giardini pubblici con un libro");
                
            else
                printf("per andare al cafè con il suo diario");
            
            
        }//if
        
    }//if
    
    else if ((pioggia == 1 || pioggia == 0) && domenica == 1){
        
        printf("Il signor Pignolino oggi è uscito ed è andato a trovare la Sr.a Precisina con ");
        
        if(pioggia == 1)
            printf("un ombrello");
            
        else
            printf("un parasole");
        
    }//else if
    
    else{
        
        printf("Oggi il Sr. Pignolino non è uscito.. Brutto tempo eh..");

        
    }//else
    

    return 0;
    
}//main