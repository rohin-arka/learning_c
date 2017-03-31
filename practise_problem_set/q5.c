// Write a C program to find the sum of first 10 natural numbers.
#include <stdio.h>
int main(void){
  int sum = 0;

  printf("The sum of the natural numbers\n");
  for (int i = 1; i < 11; i++){
    printf("%i\n", i);
    sum += i;
  }
  printf("is : %i\n", sum);
}
