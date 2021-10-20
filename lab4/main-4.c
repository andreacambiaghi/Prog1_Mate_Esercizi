/******************************************************************************

                                Esercizio 4

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void) {
    
    char frase[100];
    int lung;
    
    printf("Inserisci Frase: ");
    fgets(frase,100,stdin);
    
    lung = strlen(frase);
    
    printf("Lunghezza: %d",(lung-1));
    
    return 0;
    
}//main

/*
 #include <stdio.h>
 #include <string.h>
 int main(void)
 {
     //dichiarazioni
     
     char str[BUFSIZ];
     int lunghezza=0;
     
     //inserimento
     
     printf("inserisci stringa: ");
     fgets(str,BUFSIZ,stdin); //legge la stringa
     
     //implementazione
     
     while(str[lunghezza]!='\n'){
         lunghezza+=1;
     }
     
     //output
     
     printf("la lunghezza della frase inserita è: %d\n",lunghezza);
     printf("%s",str);
     
 }
 */
