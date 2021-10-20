/******************************************************************************

                                Esercizio 12

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

int main(void) {
    
    char rispota;
    int pioggia,giorno,domenica;
    
    printf("\nCiao Sr. Pignolino.. Come sta?");
 
    do{
        
        printf("\nPer caso oggi piove? [S/N] ");
        rispota = getchar();
        getchar();
    
        if(rispota == 'S')
            pioggia = 1;
        
        else if(rispota == 'N')
            pioggia = 0;
            
        else{
            
            printf("\nTanto Pignolino che non rispondi nemmeno correttamente!! Ritenta e sarai più fortunato ");

        }//else
        
    }while(rispota != 'S' || rispota != 'N');

    
    do{
    
        printf("\nSiamo in giorno pari? [S/N] ");
        rispota = getchar();
        getchar();
        
         if(rispota == 'S')
            giorno = 1;
        
        else if(rispota == 'N')
            giorno = 0;
            
        else{
            
            printf("\nTanto Pignolino che non rispondi nemmeno correttamente!! Ritenta e sarai più fortunato ");

        }//else
        
    }while(rispota != 'S' || rispota != 'N');
    
   do{
        
        printf("\nE' domenica? [S/N] ");
        rispota = getchar();
        getchar();
        
        if(rispota == 'S')
            domenica = 1;
        
        else if(rispota == 'N')
            domenica = 0;
            
        else{
            
            printf("\nTanto Pignolino che non rispondi nemmeno correttamente!! Ritenta e sarai più fortunato ");

        }//else
        
    }while(rispota != 'S' || rispota != 'N');

    
    if(pioggia == 0 && domenica == 0){
        
        if(giorno == 1){
            
            printf("Il signor Pignolino Ã¨ uscito ");
            
            if(giorno == 1)
                printf("per andare ai giardini pubblici con un libro");
                
            else
                printf("per andare al cafÃ¨ con il suo diario");
            
            
        }//if
        
    }//if
    
    else if ((pioggia == 1 || pioggia == 0) && domenica == 1){
        
        printf("Il signor Pignolino oggi Ã¨ uscito ed Ã¨ andato a trovare la Sr.a Precisina con ");
        
        if(pioggia == 1)
            printf("un ombrello");
            
        else
            printf("un parasole");
        
    }//else if
    
    else{
        
        printf("Oggi il Sr. Pignolino non Ã¨ uscito.. Brutto tempo eh..");

        
    }//else
    

    return 0;
    
}//main
