#include <stdio.h>
int main(void){
  int number, reverse = 0, newNumber;

  printf("Enter the number to reverse\n");
  scanf("%i", &number);

  newNumber = number * -1;

  while(newNumber > 0){
    reverse = reverse * 10;
    reverse = (reverse + (newNumber % 10));
    newNumber = newNumber / 10;
  }
  printf("the reverse number is -%i\n", reverse);
  return 0;
}
