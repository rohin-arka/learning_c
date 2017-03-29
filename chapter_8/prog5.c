#include <stdio.h>

float squareRoot(float number){
  float guess = 1.0;
  const float epsilon = 0.00001;

  while((guess * guess - number) >= epsilon){
    guess = (number / guess + guess) / 2.0;
  }
  return guess;
}
int main(void){
  printf("the square root for 4 is %f\n", squareRoot(4.0));
}
