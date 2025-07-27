#include <stdlib.h>
#include <stdio.h>

/**
 * this program subtracts the first 11 digits from 0 to 10
 * and display result
 */


 /**
 * declaration of soustraire function
 * this function evaluate the successive subtraction of n value with initial value equal 0
 *  exemple: for three first number, the result return = 0-1-3=-4
 * @param i represent the latest number to subtracts
 * @return the result of successive subtraction  of i+1 number
 * @warning the value 0=< i
 */
 int soustraire(int i);

int main(){
   //the  number of value we subtracts
   int i=11;
   printf("la soustraction de tous les %d entiers  du premier au dernier est egale à %d \n", i, soustraire(i-1));

   return EXIT_SUCCESS;

}


//definition of soustraire function
int soustraire(int i){
 //initial value of result
int resultat=0;

 //successive subtraction loop
 for (int k=0; k<= i; k++){
    resultat-=k;

 }
 return resultat;
}
