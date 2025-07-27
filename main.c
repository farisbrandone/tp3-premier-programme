#include <stdlib.h>
#include <stdio.h>

/*
* this program evaluate and display the result of addition of first n number
* for exemple, if n=3 the result display = 0+1+2+3=6
*/

/*
 * declaration of add_number function
 * this function evaluate the addition of first n number
 * @params latest_value represent the latest value of addition
 * @return the result of addition
 * @warning 0=< latest_value
*/
int add_number(int latest_value);

int main( ){
    //the number of value we add
   int number_of_value=11;
   printf("la somme des %d entiers est egale à %d \n", number_of_value, add_number(number_of_value-1) );

   return 0;

}

int add_number(int latest_value){
// initial value of result
int result=0;

// for loop who add successively the value
 for (int k=0; k<= latest_value; k++){
    result+=k;

 }
return result;
}
