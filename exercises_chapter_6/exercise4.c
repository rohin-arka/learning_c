#include <stdio.h>
int main(void){
  int inputNumber, reverseNumber = 0;

  printf("Enter the number\n");
  scanf("%i", &inputNumber);

  while(inputNumber > 0){
    reverseNumber = reverseNumber * 10;
    reverseNumber = reverseNumber + (inputNumber % 10);
    inputNumber = inputNumber / 10;
  }
  printf("%i\n" , reverseNumber);

  inputNumber = 0;
  while(reverseNumber > 0){
    inputNumber = inputNumber * 10;
    inputNumber = inputNumber + (reverseNumber % 10);
    reverseNumber = reverseNumber / 10;
  }

  // while(inputNumber > 0){
  //
  //   if (inputNumber == 1)
  //     printf("one ");
  //   if (inputNumber == 2)
  //     printf("two ");
  //   if (inputNumber == 0)
  //     printf("two ");
  //   if (inputNumber == 3)
  //     printf("two ");
  //   if (inputNumber == 4)
  //     printf("four ");
  //   if (inputNumber == 5)
  //     printf("five ");
  //   if (inputNumber == 6)
  //     printf("six ");
  //   if (inputNumber == 7)
  //     printf("seven ");
  //   if (inputNumber == 8)
  //     printf("eight ");
  //   if (inputNumber == 9)
  //     printf("nine ");
  //
  // }

  return 0;
}
