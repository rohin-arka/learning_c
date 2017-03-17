#include <stdio.h>
#include <stdbool.h>
int main(void){
  float firstNumber, secondNumber;
  bool isDivisibleByZero = false;

  printf("Enter the first number\n");
  scanf("%f", &firstNumber);
  printf("Enter the second number\n");
  scanf("%f", &secondNumber);

  if(secondNumber >= 1)
    isDivisibleByZero = true;

  if(isDivisibleByZero)
    printf("The result of first number divided by second number is %.3f\n", firstNumber / secondNumber);
  else
    printf("The first number is not divisible by second number\n");

}
