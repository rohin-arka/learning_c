/* Program to calculate the 200th triangular number
Introduction of the for statement */
#include <stdio.h>
int main(void){
  int i, triangularNumber;
  triangularNumber = 0;
  for(i = 1; i <= 200; i++){
    triangularNumber += i;
  }
  printf("the triangular number for 200th is = %i\n", triangularNumber);
  return 0;
}
