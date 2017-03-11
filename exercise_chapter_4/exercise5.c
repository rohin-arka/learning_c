// Write a program to evaluate the polynomial shown here:
// (3x)^3 - 5x2 + 6 for x = 2.55.
#include <stdio.h>
int main(void){

  // problem 3x3 - 5x2 + 6 find the computation.

  double x = 2.55;

  double result = ((3 * (x * x * x)) - (5 * (x * x)) + 6);

  printf("%f\n", result);
}
