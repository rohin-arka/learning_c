#include <stdio.h>

#define YES 1
#define NO 0

int isEven(int number){
  if (number % 2 == NO){
    return YES;
  }else{
    return NO;
  }
}
int main(void){
  int inputNumber;
  scanf("%i", &inputNumber);

  if (isEven(inputNumber)){
    printf("Input is even\n");
  }
  else{
    printf("Input number is odd\n");
  }

}
