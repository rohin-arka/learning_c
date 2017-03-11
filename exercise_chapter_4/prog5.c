#include <stdio.h>
int main(void){
  float f1 = 123.125, f2;
  int i1, i2 = -150;
  char c = 'a';

  i1 = f1; // assigning floating point number to integer type; conversion of floating point to integer;

  printf("%f assigned to integer results %i\n", f1, i1);

  f1 = i2;

  printf("%i assigned to float data type and results %f\n", i2, f1);

  f1 = i2 / 100;

  printf("assigning division of 2 integer data type: %i and 100 to float results %f\n", i2, f1);

  f2 = i2 / 100.0;

  printf("%i divided by floating number 100.0 results %f\n", i2, f2);

  f2 = (float) i2 / 100;

  printf("(float) %i divided by 100 results %f\n", i2, f2);

  return 0;
}

// points
  // when assigning floating point to integer decimal values are truncated.
  // Integer do not hold any numbers after decomal points
  // Megative integer value assigning to float data type change to float data type which holds
  // values after decimal points.
  // The third line both integer are evaluated first i.e. -150/100 and convert into float
  // the second last line is division of integer by float. the result should be float number
  // Any operation between two values in c is performed as floating point operation if
  // either values is a floaing point variable or constant.
  // float keyword is known as type type case operator which is used in last line.
  // This type cast operator has higher precedence except the unary minus and plus.
  // with the keyword float in the last line converts the result in floating number
