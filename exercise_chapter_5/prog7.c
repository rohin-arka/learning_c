// Finding the Greatest Common Divisor
#include <stdio.h>
int main(void){
  int u, v, temp;
  printf("please type in two non negative numbers\n");
  scanf("%i%i", &u, &v);
  while(v != 0){
    temp = u % v;
    u = v;
    v = temp;
  }
  printf("The greatest common divisor for %i and %i is %i\n", u, v, temp);
  return 0;
}
