#include <stdlib.h>
#include <stdio.h>

/*
* this program evaluate and display the result of addition of first n number
* for exemple, if n=3 the result display = 0+1+2+3=6
*/

/*
 * declaration of addNumber function
 * this function evaluate the addition of first n number
 * @params latestValue represent the latest value of addition
 * @return the result of addition
 * @warning 0=< latestValue
*/
int addNumber(int latestValue);

int main( ){

   int numberOfValue=11;

   printf("la somme des %d entiers est egale à %d \n", numberOfValue, addNumber(numberOfValue-1) );

   return 0;

}

int addNumber(int latestValue){
   // initial value of result
   int result=0;

   for (int k=0; k<= latestValue; k++){
      result+=k;
    }

   return result;
}
