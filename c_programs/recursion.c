#include <math.h>
#include <stdio.h>

int factorial(int number);

int main(void){
  int number;
  printf("Number: ");
  scanf("%i", &number);

  printf("Factorial: %i\n", factorial(number));
}

int factorial(int number){
  if (number == 1){ //this is the base case, where we know that 1! is equal to 1
    return 1;
  }

  return number * factorial(number - 1);  //we are calling the function "factorial" again in of itself until we reach n = 1
  //debug this code to see the "call stack" and what's happening step by step
}



