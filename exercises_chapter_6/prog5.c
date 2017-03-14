#include <stdio.h>
int main(void){
  int number, sign;
  printf("please enter the number\n");
  scanf("%i", &number);

  if(number < 0){
    sign = -1;
  }
  else if(number == 0){
    sign = 0;
  }
  else{
    sign = 1; 
  }
  printf("the signed number for %i = %i\n", number, sign);
  return 0;
}
