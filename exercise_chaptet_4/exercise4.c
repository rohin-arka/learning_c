// What output would you expect from the following program?
#include <stdio.h>
 int main (void) {
   char c, d;

   c = 'd';
   d = c;

   printf ("d = %c\n", d);
   return 0;
 }
// d should be 'd'.
// Explanation
// initialialy empty characters are defined c and d.
// later 'd' is assigned to variable c;
// and value of c is assigned to d variable. finally it should 'd'
