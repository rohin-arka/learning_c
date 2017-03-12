// Write a program to generate and display a table of n and n2,
// for integer values of n ranging from 1 to 10. Be certain to print appropriate column headings.
#include <stdio.h>
int main(void){

  printf("Table of n and n square\n\n");
  printf("Value of n is as below    ");
  printf("Value of n square is as below\n");

  for(int n = 0, result = 0; n <= 10; n++){
    result = (n * n);
    printf("%10i    ", n);
    printf("%30i\n", result);
  }
  return 0;
}
// point IMPORTANT
  // without curly braces only one statement is consider as valid by compiler
  // with curly braces multiple line can be used as above
