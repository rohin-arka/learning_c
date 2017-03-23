#include <stdio.h>

int main(void){
  int array_values[10] = { 0, 1, 2, 3, 4 };

  for(int i = 5; i < 10; i++){
    array_values[i] = i * i;
  }
  for (int i = 0; i < 10; i++){
    printf("array_values[%i] = %i\n", array_values[i], i);
  }
  return 0;
}
