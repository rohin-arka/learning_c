#include <stdio.h>
int main(void){
  int a = 100;
  int b = 2;
  int c = 25;
  int d = 4;
  int result;

  result = a - b;
  printf("a - b = %i\n", result);

  result = b * c;
  printf("b * c = %i\n", result);

  result = a / c;
  printf("a / c = %i\n", result);

  result = a + b * c;
  printf("a + b * c = %i\n", result);

  printf(" a * b + c * d = %i\n", a * b + c * d);

  return 0;
}

// points to remember
  // 1st operation goes fine subtracting integer value form integer
  // 2nd operation goes fine multiplying two carrier set
  // Third operation is the division which should result 4;
  // The fourth operation is completed due to precedence.
  // According to mathmatical operation multiplication comes first then addition
  // which means a + (b*c) the bracket operation goes first ant the result should be 150;
  // The last operation is similar to second last but bit complicated.
  // The expression evaluation will be like (a * b) + (c * d) = 200 + 100 = 300;
