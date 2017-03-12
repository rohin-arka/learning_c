#include <stdio.h>
int main(void){
  int i, factorial = 1;
  for (i = 1; i <= 10; i++){
    factorial *= i;
    printf("%i! =  %i\n", i, factorial);
  }
  return 0;
}
