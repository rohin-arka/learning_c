#include <stdio.h>
int main(){
  int i = 10, x;
  int *int_pointer;
  int_pointer = &i;
  x = *int_pointer;

  printf("i = %i, x = %i\n", i, x);
}
