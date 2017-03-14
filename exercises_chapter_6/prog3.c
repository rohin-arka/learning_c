// Program to determine if a number is even or odd
#include <stdio.h>
int main(void){
  int inputNumber, remainder;
  printf("Enter the number to find odd or even\n");
  scanf("%i", &inputNumber);
  remainder = inputNumber % 2;
  if (remainder == 0){
    printf("The number is even\n");
  }
  else{
    printf("The number is odd\n");
  }
  return 0;
}
