#include <stdio.h>
void checkTraingularNumber(number){
  int newNumber = 0;
  for(int i = 1; i <= number; i++){
    newNumber += i;
  }
  printf("traingular number for %i is %i\n", number, newNumber);
}
int main(void){

  checkTraingularNumber(10);
  checkTraingularNumber(15);
  checkTraingularNumber(20);
  checkTraingularNumber(22);
  checkTraingularNumber(28);
  return 0;
}
