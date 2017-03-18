#include <stdio.h>
int main(void){
  int values[10];

  values[0] = 197;
  values[2] = -100;
  values[5] = 350;
  values[6] = values[0] + values[5];
  --values[2];

  printf("%i\n", values[8]);

  for(int index = 0; index < 10; index++)
    printf("values[%i] = %i\n", index, values[index]);

  return 0;
}
