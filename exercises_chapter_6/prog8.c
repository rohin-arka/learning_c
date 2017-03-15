#include <stdio.h>
int main(void){
  float val1, val2;
  char operator;
  printf("enter the values with operator as 1+2\n");
  scanf("%f %c %f", &val1, &operator, &val2);

  switch (operator){
    case '+':
      printf("the result is %f\n", val1 + val2);
      break;
    case '-':
      printf("the result is %f\n", val1 - val2);
      break;
    case '*':
      printf("the result is %f\n", val1 * val2);
      break;
    case '/':
      printf("the result is %f\n", val1 / val2);
      break;
    default:
      printf("operator %c not supported by program\n", operator);
      break;
  }

  return 0;
}
