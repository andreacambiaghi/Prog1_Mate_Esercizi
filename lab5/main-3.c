/******************************************************************************

                                Esercizio 3

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

int bool = 0,ins = 0;
double x = 0,y = 0;

void inserimento();
void somma(double x, double y);
void differenza(double x, double y);
void prodotto(double x, double y);
void divisione(double x, double y);

int main(void) {
    
    char sc;
    
    do{
        
        printf("\n0. Inserisci numeri\n1. Addizione\n2. Sottrazione\n3. Moltiplicazione\n4. Divisione\n5. Esci\n>");
        sc = getchar();
        getchar();
        
        switch(sc){
            
            case '0':
                inserimento();
                break;
            case '1':
                somma(x,y);
                break;
            case '2':
                differenza(x,y);
                break;
            case '3':
                prodotto(x,y);
                break;
            case '4':
                divisione(x,y);
                break;
            case '5':
                printf("Ciao!");
                bool = 1;
                break;
            default:
                break;
            
        }//switch
        
    }while((sc<1 || sc>5) && bool == 0);
    
    return 0;
    
}//main

void inserimento(){
    
    printf("Inserisci i due operandi: ");
    scanf("%lf %lf",&x,&y);
    getchar();
    ins = 1;
    
}//inserimento

void somma(double x,double y){
    
    if(ins == 0)
        printf("Prima inseriscli gli operandi..");
    else
     printf("Somma: %g",x+y);
    
}//somma

void differenza(double x,double y){
    
    if(ins == 0)
        printf("Prima inseriscli gli operandi..");
    else
        printf("Sottrazione: %g",x-y);

}//differenza

void prodotto(double x,double y){
    
    if(ins == 0)
        printf("Prima inseriscli gli operandi..");
    else
     printf("Prodotto: %g",x*y);
     
}//prodotto

void divisione(double x,double y){
    
    if(ins == 0)
        printf("Prima inseriscli gli operandi..");
    else  
        
        if(y == 0) {
         
            printf("Non si puà dividere per 0");
    
         }//if
    
    else{
        
         printf("Divisione: %g",x/y);
    
    }//else
    
}//divisione
