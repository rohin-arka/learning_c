// includes header file which ia the prototype of function printf for execution
#include <stdio.h>
// main function which is being called in program execution
int main(void){
  // defining integer type variable
  int subtrahend, minuend, result;
  // assigning integer values to variable as defined above
  subtrahend = 15;
  minuend = 87;
  result = minuend - subtrahend;
  // %i is the placeholder to print the variable as in the second argument.
  printf("Result of %i subtracted from %i is %i\n", subtrahend, minuend, result);
}
