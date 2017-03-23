#include <stdio.h>
int main(void){
  char word[] = { 'H', 'e', 'l', 'l', 'o' };

  for (int i = 0; i <= 4; i++){
    printf("word is word[%i] = %c\n", i, word[i]);
  }
}
