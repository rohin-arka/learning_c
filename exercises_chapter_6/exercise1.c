// Write a program that asks the user to type in two integer values at the terminal.
// Test these two numbers to determine if the first is evenly divisible by the second,
// and then display an appropriate message at the terminal.
#include <stdio.h>
int main(void){
  int firstNumber, secondNumber;

  printf("Enter the first number\n");
  scanf("%i", &firstNumber);

  printf("Enter the second number\n");
  scanf("%i", &secondNumber);

  if ((firstNumber % secondNumber) == 0)
    printf("first number is divisible by second\n");
  else
    printf("first number is not divisible by second number\n");

  return 0;  
}
