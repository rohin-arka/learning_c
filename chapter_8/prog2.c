#include <stdio.h>
void printMessage(){
  printf("Hello people C is an awesome language. :)\n");
}
int main(void){
  for(int i = 0; i < 5; i++)
    printMessage();
  return 0;
}
