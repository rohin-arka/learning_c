// Program to reverse the digits of a number
#include <stdio.h>
int main(void){
  int number, modulusNumber;
  printf("Enter the number you want to reverse ?\n");
  scanf("%i", &number);
  // 50
  // next step of loop
  // now number = 5 as assigned below statement
  while(number != 0){
    // modulusNumber = 0

    // next step loop
    // modulusNumber = 5 % 10 => 5
    modulusNumber = number % 10;
    // prints 0;
    // next loop prints 5
    printf("%i", modulusNumber);
    // set number to 5
    // in next loop 5/10 = 0 and loop ends as loop condition is number != 0
    number = number / 10;
  }
  printf("\n");
  return 0;
}
