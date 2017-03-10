// which of the following are invalid variable in c ? why?
  //  Int           char   6_05
  // Calloc         Xx     alpha_beta_routine
  // floating      _1312   z
  // ReInitialize  _       A$

// Int, char is invalid because it is a reserved keyword. it is used being compiler
// 6_05 is invalid. variable name should not start with integer
// Calloc valid keyword letter can start with uppercase or lowercase no matter.
// floating perfect variable starting with lowecase and floating is not reserved keyword.
// aplha_beta_routine valid because letter variable starts with letter and underscore between is not complain by compiler.
// ReInitialize This is also valid variable example. ruby compiler has no problem variable name starts with uppercase
// _ valid variable can also named as _ with prefix
// _1312 valid variable starts from _followed by numbers.
// A$ hmm this should be valid but if there are any characters after the dollar sign that is invalid.
// Xx // valid no matter starts with uppercase and ends with lowecase
// z // perfectly valid starts with lowercase
#include <stdio.h>
int main(void){
  int z = 1;
  printf("%i\n", z);
  return 0;
}
