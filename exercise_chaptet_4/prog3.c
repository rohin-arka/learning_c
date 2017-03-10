#include <stdio.h>
int main(void){
  int a = 25;
  int b = 2;

  float c = 25.0;
  float d = 2.0;

  printf("6 + a / 5 * b = %i\n", 6 + a / 5 * b);

  printf("a / b * b = %i\n", a / b * b);

  printf("c / d * d = %f\n", c / d * d);

  printf("-a = %i\n", -a);

  return 0;
}
// first operation will be 6 + 5 * 2 =  6 + 10 = 16;
// sedond operation will be 12 * 2 = 24. because the output of a / b is not parse as float.
// the third aithmetic operation will be 25.0/2.0 * 2.0 = 12.5 * 2.0 = 25.0
// This time its because both carrier sets are float data type.
// using unary - operation in the integer will result -25 in last operation.
