// solving triangular problme using algorithm
// Tn = (n + (n + 1) / 2);

#include <stdio.h>
int main(void){
  printf("Triangular number for     ");
  printf("Triangular\n");
  for(int n = 5, triangularNumber = 0; n <= 50; n += 5){
    triangularNumber = (n * (n + 1)) / 2;
    printf("%2i", n);
    printf("%30i\n", triangularNumber);
  }
  return 0;
}
