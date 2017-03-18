#include <stdio.h>
int main(void){
  int inputNumber, reverseNumber = 0, counter = 0;

  printf("Enter the number\n");
  scanf("%i", &inputNumber);

  while(inputNumber > 0){
    reverseNumber = reverseNumber * 10;
    reverseNumber = reverseNumber + (inputNumber % 10);
    inputNumber = inputNumber / 10;
  }

  while(reverseNumber > 0){
    counter = reverseNumber % 10;
    reverseNumber = reverseNumber / 10;
    if (counter == 1)
      printf("one ");
    if (counter == 2)
      printf("two ");
    if (counter == 0)
      printf("two ");
    if (counter == 3)
      printf("three ");
    if (counter == 4)
      printf("four ");
    if (counter == 5)
      printf("five ");
    if (counter == 6)
      printf("six ");
    if (counter == 7)
      printf("seven ");
    if (counter == 8)
      printf("eight ");
    if (counter == 9)
      printf("nine ");
    if (counter == 0)
      printf("zero ");
  }
  printf("\n");

  return 0;
}
