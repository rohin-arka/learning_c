#include <stdio.h>
int main(void){
  int fibonacci[15];
  fibonacci[0] = 0, fibonacci[1] = 1;

  for(int i = 2; i < 15; i++){
    fibonacci[i] = fibonacci[i-2] + fibonacci[i-1];
  }

  for(int i = 0; i < 15; i++){
    printf("Fibonacci are %i\n", fibonacci[i]);
  }
}
