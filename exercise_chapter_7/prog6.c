// base 2 conversion first
#include <stdio.h>
int main(void){
  int convertedNumber[60], userInput, index = 0;

  printf("input the number to conver in base 2\n");

  scanf("%i", &userInput);

  do {
    convertedNumber[index] = userInput % 2;
    userInput = userInput / 2;
    index++;
  }
  while(userInput != 0);

  printf("index %i\n", index);

  for(--index; index >= 0; --index){
    printf("%i\n", convertedNumber[index]);
  }
}
