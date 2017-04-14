// Write a program in C to display the pattern like right angle triangle with a number
// 1
// 12
// 123
// 1234
#include <stdio.h>
int main(void){
  for(int i = 1; i <= 10; i++){
    printf("%i", i);
    for (int j = 1; j <= i ; j++){
      printf("%i", j);
    }
    printf("\n");
  }
  return 0;
}
