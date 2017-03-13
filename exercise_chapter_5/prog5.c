#include <stdio.h>
int main(void){

  int triangularNumber;

  for(int i = 0, userInput; i < 5; i++){
    printf("Enter the first number, you want to find triangular..\n");
    scanf("%i", &userInput);
    triangularNumber = 0;
    for(int j = 0; j <= userInput; j++){
      triangularNumber += j;
    }
    printf("The triangular number for %i = %i\n", userInput, triangularNumber);
  }
}
