//es 6 lezione 6

#include <stdio.h>

void strcopy (char *, char*);
int str_len (char*);
void clean (char *, char *, char);
void cleanS (char*, char*, char *);

int main(int argc, char* argv[])
{
    if(argc != 3){
        printf("Errore nel numero di argomenti.\n");
        return -1;
    }

    char strcleaned[BUFSIZ];

    cleanS(argv[1], strcleaned, argv[2]);

    printf("Stringa %s senza %s : %s", argv[1], argv[2], strcleaned);

    return 0;
}

int str_len (char *input){
    int m=0, i=0;
    for (; *(input + i) != '\0'; i++); //conta i caratteri finchè non arriva a \0
    return i;
}

void clean (char* dirty, char* cleaned, char c){

  int k = 0;

    for (size_t i = 0; i < str_len(dirty); i++) {

      if(*(dirty+i) != c){
          *(cleaned+k) = *(dirty + i);
          k++;
      }

    }

    /*for (int i = 0; i<str_len(dirty); i++){

        if(*(dirty+i) != c){
            *(cleaned + i) = *(dirty + i);
        }else cleaned = cleaned - 1;
    }

    //devo mettere tutti i '\0' alla fine della cleaned il puntatore può puntare alla fine o alla fine-1
    */
}

void strcopy (char *str1, char* str2){
    for (int i =0; i<str_len(str1); i++){
        *(str2 + i) = *(str1 + i);
    }

    if(str_len(str2) > str_len(str1)){
        for (int j = str_len(str1); j<str_len(str2); j++){
            *(str2 + j) = '\0';
        }
    }
} //copia la prima sulla seconda


void cleanS (char*dirty, char*cleaned, char *c){

    char aux[BUFSIZ];

    strcopy(dirty, aux);
    for (int j=0; j<str_len(c); j++){

        clean(aux, cleaned, *(c+j));
        printf("%d)aux: %s\t cleaned: %s\n ", j, aux, cleaned);

        strcopy(cleaned, aux);
    }
}

/*/        0 1 2 3 4 5 6 7 8 9      0 1 2
//dirty   C I A O M A R G O T    c C A O
  //      0 1 2 3 4 5 6 7 8 9
/0aux     C I A O M A R G O T
//        0 1 2 3 4 5 6 7 8 9
/0cleaned I A O M A R G O T-
  //      0 1 2 3 4 5 6 7 8 9
/1aux     I A O M A R G O T-
//        0 1 2 3 4 5 6 7 8 9
/1cleaned I O M R G O T - -
  //      0 1 2 3 4 5 6 7 8 9
/2aux     I O M R G O T - - -
//        0 1 2 3 4 5 6 7 8 9
/2cleaned I M R G T - - - - -
*/
