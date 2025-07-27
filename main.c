#include <stdlib.h>
#include <stdio.h>

/**
 * this application subtracts the first 11 number from 0 to 10
 * and display result
 */


 /**
 * declaration of subtracts function
 * this function evaluate the successive subtraction of n value with initial value equal 0
 *  exemple: for three first number, the result return = 0-1-3=-4
 * @param latest_value represent the latest number to subtracts
 * @return the result of successive subtraction  of i+1 number
 * @warning the value 0=< latest_value
 */
 int subtracts(int latest_value);

int main(){
   //the  number of value we subtracts
   int number_of_value=11;
   printf("la soustraction de tous les %d entiers  du premier au dernier est egale à %d \n", number_of_value, subtracts(number_of_value-1));

   return EXIT_SUCCESS;

}


//definition of subtracts function
int subtracts(int latest_value){
 //initial value of result
int result=0;

 //successive subtraction loop
 for (int k=0; k<= latest_value; k++){
    result-=k;

 }
 return result;
}
