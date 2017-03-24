#include <stdio.h>
int main(void){

  const char baseDigits[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                                'A', 'B', 'C', 'D', 'E', 'F' };

  int convertedNumber[60], userInput, index = 0, nextDigit;


  printf("Enter the number to be converted in base 16\n");
  scanf("%i", &userInput);

  do{
    convertedNumber[index] = userInput % 16;
    userInput = userInput / 16;
    index++;
  }
  while(userInput != 0);

  for(--index; index >= 0; index--){
    nextDigit = convertedNumber[index];
    printf("%c", baseDigits[nextDigit]);
  }

  printf("\n");
  return 0;
}
