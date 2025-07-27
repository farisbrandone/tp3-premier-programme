#include <stdlib.h>
#include <stdio.h>

/*
* this program evaluate and display the result of addition of first n number
* for exemple, if n=3 the result display = 0+1+2+3=6
*/

/*
 * declaration of somme function
 * this function evaluate the addition of first i+1 number
 * @params i represent the latest value of addition
 * @return the result of addition
 * @warning 0=< i
*/
int somme(int i);

int main( ){
    //the number of value we add
   int i=11;
   printf("la somme des %d entiers est egale à %d \n", i, somme(i-1) );

   return 0;

}

int somme(int i){
// initial value of result
int resultat=0;

// for loop who add successively the value
 for (int k=0; k<= i; k++){
    resultat+=k;

 }
return resultat;
}
