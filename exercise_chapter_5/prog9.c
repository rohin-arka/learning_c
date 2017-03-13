/* reversion string with do while loop */
#include <stdio.h>
int main(void){
  int shiftedNumber, number;
  printf("Please input the first number\n");
  scanf("%i", &number);

  do{
      shiftedNumber = number % 10;
      printf("%i", shiftedNumber);
      number = number / 10;
    }
  while(number != 0);
  printf("\n");
  return 0;
}
