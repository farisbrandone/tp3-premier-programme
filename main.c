#include <stdlib.h>
#include <stdio.h>

int somme(int);

int main(int argc, char **arg ){

   int i=10;
   printf("la somme des %d entiers est egale à %d \n", i, somme(i) );

   return EXIT_SUCCESS;

}

int somme(int i){

int resultat=0;

 for (int k=0; k<= i; k++){
    resultat+=k;
    return resultat;
 }

}
