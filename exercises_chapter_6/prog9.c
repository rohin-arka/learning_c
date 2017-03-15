#include <stdio.h>
int main(void){
  _Bool isPrime;

  for(int i = 2; i <= 50; ++i){
    isPrime = 1;
    for(int d = 2; d < i; ++d){
      if(i % d == 0){
        isPrime = 0;
      }
    }
    if(isPrime == 1){
      printf("%i is prime\n", i);
    }
  }
  return 0;
}
