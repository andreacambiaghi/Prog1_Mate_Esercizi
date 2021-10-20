/******************************************************************************

                                Esercizio 2

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

int main(void) {
    
    char sc;
    double x,y;
    int bool = 0,ins = 0;
    
    do{
        
        printf("\n0. Inserisci numeri\n1. Addizione\n2. Sottrazione\n3. Moltiplicazione\n4. Divisione\n5. Esci\n>");
        sc = getchar();
        getchar();
        
        switch(sc){
            
            case '0':
                printf("Inserisci i due operandi: ");
                scanf("%lf %lf",&x,&y);
                getchar();
                ins = 1;
                break;
            case '1':
                if(ins == 0)
                    printf("Prima inseriscli gli operandi..");
                else
                 printf("Somma: %g",x+y);
                break;
            case '2':
                if(ins == 0)
                    printf("Prima inseriscli gli operandi..");
                else
                 printf("Sottrazione: %g",x-y);
                break;
            case '3':
                if(ins == 0)
                    printf("Prima inseriscli gli operandi..");
                else
                 printf("Prodotto: %g",x*y);
                break;
            case '4':
                if(ins == 0)
                    printf("Prima inseriscli gli operandi..");
                else  
                    
                    if(y == 0) {
                     
                        printf("Non si puà dividere per 0");

                     }//if
                
                else{
                    
                     printf("Divisione: %g",x/y);

                }//else
                   
                break;
            case '5':
                printf("Ciao!");
                bool = 1;
                break;
            default:
                break;
            
        }//switch
        
    }while((sc<1 || sc>5) && bool == 0);
    
    
    
}//main
