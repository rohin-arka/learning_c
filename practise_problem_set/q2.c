// Write a C program to print a block F using hash (#), where the F has a height of six
// characters and width of five and four characters.
//
// ######
// #
// #
// #####
// #
// #
// #
#include <stdio.h>
void fPrinter(int row, int counter){
  for(int i = 1; i <= row; i++){
    if(counter == 1 || counter == 4){
      printf("######\n");
    }
    else if (counter > 1){
      printf("#\n");
    }
    counter += 1;
  }
}
int main(){
  fPrinter(7, 0);
}
