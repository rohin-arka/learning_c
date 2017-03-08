/* prog2 adds 2 integer values and display sum */
#include <stdio.h>
int main(void){
  // define variable first_number with value 10
  int first_number = 10;
  // define variable second_number with value 10
  int second_number = 20;
  // define variable sum which holds sum of first_number and second_number
  int sum = first_number + second_number;
  // prints string with variable
  printf("The sum of numer %i and %i is %i\n", first_number, second_number, sum);
  return 0;
}
// Points to understand

// int keyword in variable name
  // int is a variable type definition which instruct variable to only hold integer numbers.

// %i
  // prints the integer data type variable

// comments in C
  // /* */ is multiline comment. The comments starts with /* and have to be terminated by */
  // in the end of the comments.
  // the next way to comment is //. this comment terminates automatically in the next line
