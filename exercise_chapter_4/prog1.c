#include <stdio.h>
int main(void){
  int integerVar = 100;
  float floatingVar = 331.79797;
  double doubleVar = 8.444e+11;
  char charVar = 'W';
  _Bool boolVar = 0;

  printf("integerVar holds = %i\n", integerVar);
  printf("floatingVar holds = %f\n", floatingVar);
  printf("doubleVar holds = %e\n", doubleVar);
  printf("charVar holds = %c\n", charVar);
  printf("boolVar holds = %i\n", boolVar);
  return 0;
}
// Points to remember
  // Integer in c holds a integer number withoug decimal numbers
  // Float data type can hold values with decimal place.
  // Float gives 23 bits of significand, 8 bits of exponent and 1 sign bit
  // Double gives 53 bits of significand, 11 bits of exponent and 1 sign bit
  // boolean holds integer value which is either 0 or 1
  // 0 is the the standard which represent false and 1 represent true.
