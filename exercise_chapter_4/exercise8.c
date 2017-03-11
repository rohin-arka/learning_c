// To round off an integer i to the next largest even multiple of another integer j,
// the following formula can be used:
// Next_multiple = i + j - i % j
// For example, to round off 256 days to the next largest number of days evenly divisible by a week, values of i = 256 and j = 7 can be substituted into the pre- ceding formula as follows:
// Next_multiple = 256 + 7 - 256 % 7 = 256 + 7 - 4
// = 259
// Write a program to find the next largest even multiple for the following values of i and j:
// ij
// 365 7 12,258 23 996 4
// problem solved by very simple data structure
#include <stdio.h>
int main(void){
  int value_i1 = 365, value_i2 = 12258, value_i3 = 996, value_j1 = 7, value_j2 = 23, value_j3 = 4;
  int result;

  result = value_i1 + value_j1 - value_i1 % value_j1;
  printf("%i next largest round of integer is %i\n", value_i1, result);

  result = value_i2 + value_j2 - value_i2 % value_j2;
  printf("%i next largest round of integer is %i\n", value_i3, result);

  result = value_i3 + value_j3 - value_i3 % value_j3;
  printf("%i next largest round of integer is %i\n", value_i3, result);
  return 0;
}
