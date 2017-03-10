#include <stdio.h>
int main(void){
  int a = 25, b = 5, c = 10, d = 7;
  printf("a %% b = %i\n", a % b);
  printf("a %% c = %i\n", a % c);
  printf("a %% d = %i\n", a % d);
  printf("a / d * d + a %% d = %i\n", a / d * d + a % d);
  return 0;
}
// points regarding precedence of airthmentic
  // a % b is simple it return the remainder which is 5 * 5  so the remainder is 5;
  // a % c is same as the first expression which should result 5;
  // a % d must return 3
  // The last expresession seems complex but it is simple too.
  // first precedence goes to division the result will then multiploed with d
  // then the precendence is forwared to moduls and the addition begins.
