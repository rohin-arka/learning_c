#include <stdio.h>
void greatestDivisor(int a, int b){
  int temp;
  while(b != 0){
    temp = a % b;
    a = b;
    b = temp;
  }
  printf("%i\n", a);
}
int main(void){
  greatestDivisor(10, 30);
  greatestDivisor(20, 30);
  greatestDivisor(30, 10);
}
