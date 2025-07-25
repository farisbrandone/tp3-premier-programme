#include <stdlib.h>
#include <stdio.h>

int soustraire(int);

int main(int argc, char **arg ){

   int i=10;
   printf("la soustraction de tous les %d entiers  du premier au dernier est egale à %d \n", i, somme(i) );

   return EXIT_SUCCESS;

}

int somme(int i){

int resultat=0;

 for (int k=0; k<= i; k++){
    resultat-=k;
    return resultat;
 }

}
